#ifndef SERVEURCRAWLER_H
#define SERVEURCRAWLER_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include <QRandomGenerator>
#include <QDateTime>
#include <QThread>
#include <QGridLayout>
#include <QHostAddress>
#include <QHostInfo>
#include <QBuffer>
#include <QDataStream>

#define TAILLE 20



QT_BEGIN_NAMESPACE
namespace Ui { class ServeurCrawler; }
QT_END_NAMESPACE

class ServeurCrawler : public QWidget
{
    Q_OBJECT

public:
   explicit ServeurCrawler(QWidget *parent = nullptr);
    ~ServeurCrawler();

private slots:
    void on_pushButtonLancement_clicked();
    void onQTcpServer_newConnection();
    void onQTcpSocket_ReadyRead();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);


private:
    Ui::ServeurCrawler *ui;

    QTcpServer socketEcoute;
    QList <QTcpSocket*>listeSocketsClient;
    QList<QPoint>listePositions;
    QPoint tresor;
    QGridLayout grille;
    void EnvoyerDonnees(QTcpSocket* client, QPoint pt, QString message);
    void AfficherGrille();
    void ViderGrille();
    QPoint DonnerPositionUnique();
    double CalculerDistance(QPoint pos);
};
#endif // SERVEURCRAWLER_H
