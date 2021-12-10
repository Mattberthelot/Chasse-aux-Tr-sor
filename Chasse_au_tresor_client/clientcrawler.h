#ifndef CLIENTCRAWLER_H
#define CLIENTCRAWLER_H

#include <QWidget>
#include <QTcpSocket>
#include <QChar>
#include <QGridLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class ClientCrawler; }
QT_END_NAMESPACE

class ClientCrawler : public QWidget
{
    Q_OBJECT

public:
    ClientCrawler(QWidget *parent = nullptr);
    ~ClientCrawler();
  void EnvoyerCommande(QChar commande);

private slots:
    void on_pushButton_left_clicked();

    void on_pushButton_up_clicked();

    void on_pushButton_Right_clicked();

    void on_pushButton_Down_clicked();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);

    void on_pushButtonConnexion_clicked();

private:
    Ui::ClientCrawler *ui;
    QPoint position;
    QTcpSocket *socketDeDialogieViaLeServeur;
    QGridLayout *grille;

};
#endif // CLIENTCRAWLER_H
