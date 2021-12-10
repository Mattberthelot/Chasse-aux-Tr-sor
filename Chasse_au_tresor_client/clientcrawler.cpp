#include "clientcrawler.h"
#include "ui_clientcrawler.h"

ClientCrawler::ClientCrawler(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClientCrawler)
{
    ui->setupUi(this);
    socketDeDialogieViaLeServeur= new QTcpSocket (this);
  connect(socketDeDialogieViaLeServeur,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&ClientCrawler::onQTcpSocket_error);
  connect(socketDeDialogieViaLeServeur,&QTcpSocket::connected,this,&ClientCrawler::onQTcpSocket_connected);
  connect(socketDeDialogieViaLeServeur,&QTcpSocket::disconnected,this,&ClientCrawler::onQTcpSocket_disconnected);
  connect(socketDeDialogieViaLeServeur,&QTcpSocket::readyRead,this,&ClientCrawler::onQTcpSocket_error);
}

ClientCrawler::~ClientCrawler()
{
    delete ui;
    delete socketDeDialogieViaLeServeur;
}

void ClientCrawler::EnvoyerCommande(QChar commande)
{

}

void ClientCrawler::on_pushButton_left_clicked()
{
 EnvoyerCommande('L');
}

void ClientCrawler::on_pushButton_up_clicked()
{
EnvoyerCommande('U');
}

void ClientCrawler::on_pushButton_Right_clicked()
{
EnvoyerCommande('R');
}

void ClientCrawler::on_pushButton_Down_clicked()
{
EnvoyerCommande('D');
}

void ClientCrawler::onQTcpSocket_readyRead()
{

}

void ClientCrawler::onQTcpSocket_connected()
{
    ui->listWidgetInformations->currentTextChanged("Connected");
ui->pushButtonConnexion->setText("connexion");
}

void ClientCrawler::onQTcpSocket_disconnected()
{
ui->listWidgetInformations->currentTextChanged("Deconnected");
ui->pushButtonConnexion->setText("deconnexion");
}

void ClientCrawler::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
ui->listWidgetInformations->currentTextChanged(socketDeDialogieViaLeServeur->errorString());
}

void ClientCrawler::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text()=="Connexion")
    {
    socketDeDialogieViaLeServeur->connectToHost(ui->lineEdit_Adresse->text(),ui->spinBox_Port->value());
    }
    else
    {
    socketDeDialogieViaLeServeur->disconnectFromHost();
    }
}
