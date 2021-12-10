#include "ServeurCrawler.h"
#include "ui_serveurcrawler.h"

ServeurCrawler::ServeurCrawler(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurCrawler)
{
    ui->setupUi(this);
}

ServeurCrawler::~ServeurCrawler()
{
    delete ui;
}


void ServeurCrawler::on_pushButtonLancement_clicked()
{
    if(!socketEcoute.listen(QHostAddress::Any,ui->spinBox_Port->value())){

    }
    else{
        QObject::connect(&socketEcoute,&QTcpServer::newConnection,this,&ServeurCrawler::onQTcpServer_newConnection);
    }

}

void ServeurCrawler::onQTcpServer_newConnection()
{
    QTcpSocket *client;
    //connection
    client=socketEcoute.nextPendingConnection();
   connect(client,&QTcpSocket::readyRead,this,&ServeurCrawler::onQTcpSocket_ReadyRead);
   connect(client,&QTcpSocket::disconnected,this,&ServeurCrawler::onQTcpSocket_disconnected);
  // connect(client,&QTcpSocket::error,this,&ServeurCrawler::onQTcpSocket_error);


    listeSocketsClient.append(client);
    QPoint pointDeLancement=DonnerPositionUnique();
    listePositions.append(pointDeLancement);
    EnvoyerDonnees(client,pointDeLancement,"start");
}

void ServeurCrawler::onQTcpSocket_ReadyRead()
{
    QChar commande;
    QString message;
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int DifferentProcess=listeSocketsClient.indexOf(client);
   /* if(client->bytesAvailable())
    {
        QByteArray tmp=client->readAll();
        commande=tmp.at(0);

        QString message = "Commande reçu de "+client->peerAddress().toString()+" : ";
        message += commande;
        ui->textEdit_Clients->append(message);
        QString reponse;

        switch(commande.toLatin1()){
        case 'u': reponse = getenv("LOGNAME");
            client->write(reponse.toUtf8());
            break;


        case'd' :
            listeProcess.at(indexProcess)->start("uname");


        case'l':
            reponse =QHostInfo::localHostName();
            client->write(reponse.toLatin1());
            break;

        case'r':
            listeProcess.at(indexProcess)->start("uname",QStringList("-p"));
        }
        qDebug()<<"reponse : "<<reponse;
    }*/
}

void ServeurCrawler::onQTcpSocket_disconnected()
{
    QTcpSocket*socketClient=qobject_cast<QTcpSocket*>(sender());
    int indexDuClient = listeSocketsClient.indexOf(socketClient);
    listeSocketsClient.removeAt(indexDuClient);
    listePositions.removeAt(indexDuClient);
    disconnect(socketClient,&QTcpSocket::disconnected,this,&ServeurCrawler::onQTcpSocket_disconnected);

}

void ServeurCrawler::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    QTcpSocket *socketClient=qobject_cast<QTcpSocket*>(sender());
    qDebug()<<socketClient->errorString();
}

void ServeurCrawler::EnvoyerDonnees(QTcpSocket *client, QPoint pt, QString message)
{
    quint16 taille=0;
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);
    out<<taille<<pos()<<message<<CalculerDistance(pos());
    taille=tampon.size()-sizeof(taille);
    tampon.seek(0);
    out<<taille;
    client->write(tampon.buffer());
}

void ServeurCrawler::AfficherGrille()
{
    /*for(int ligne=0; ligne<TAILLE; ligne++)
    {
    for (int colonne=0; colonne<TAILLE; colonne++)
    {
    QToolButton *b=new QToolButton();
    grille->addWidget(b,ligne,colonne,1,1);
    }
    }
    // Placement sur la grille des objets présents sur ui
    // les labels
    grille->addWidget(ui->labelAdresseServeur,TAILLE,0,1,5);
    grille->addWidget(ui->labelNumeroPort,TAILLE,6,1,5);
    grille->addWidget(ui->labelDistance,TAILLE+3,0,1,5);
    grille->addWidget(ui->labelInformations,TAILLE+3,12,1,5);
    // les QLineEdit adresse et port
    grille->addWidget(ui->lineEditAdresseServeur,TAILLE+1,0,1,5);
    grille->addWidget(ui->spinBoxPortServeur,TAILLE+1,6,1,5);
    // les QPushButton connexion et quitter
    grille->addWidget(ui->pushButtonConnexion,TAILLE+2,0,1,5);
    grille->addWidget(ui->pushButtonQuitter,TAILLE+2,6,1,5);
    // les QPushButton fleches
    grille->addWidget(ui->pushButtonUp,TAILLE,15,1,1);
    grille->addWidget(ui->pushButtonLeft,TAILLE+1,14,1,1);
    grille->addWidget(ui->pushButtonRight,TAILLE+1,16,1,1);
    grille->addWidget(ui->pushButtonDown,TAILLE+2,15,1,1);
    //distance et informations
    grille->addWidget(ui->lcdNumberDistance,TAILLE+3,6,1,5);
    this->setLayout(grille);
    */
}

QPoint ServeurCrawler::DonnerPositionUnique()
{
QRandomGenerator gen;
QPoint pt;
gen.seed(QDateTime::currentMSecsSinceEpoch());
int ligne;
int colonne;
do
{
ligne = gen.bounded(TAILLE);
QThread::usleep(20000); // attendre 20ms
colonne = gen.bounded(TAILLE);
QThread::usleep(20000); // attendre 20ms
pt = QPoint(colonne,ligne);
}while (listePositions.contains(pt));
return pt;
}
double ServeurCrawler::CalculerDistance(QPoint pos)
{
double distance;
int xVecteur = tresor.x()-pos.x();
int yVecteur = tresor.y()-pos.y();
distance = sqrt((xVecteur*xVecteur + yVecteur*yVecteur));
return distance;
}
