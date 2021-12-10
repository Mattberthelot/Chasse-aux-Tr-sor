/********************************************************************************
** Form generated from reading UI file 'clientcrawler.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTCRAWLER_H
#define UI_CLIENTCRAWLER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientCrawler
{
public:
    QLineEdit *lineEdit_Adresse;
    QSpinBox *spinBox_Port;
    QPushButton *pushButtonConnexion;
    QPushButton *pushButton_Quitter;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_up;
    QPushButton *pushButton_Right;
    QPushButton *pushButton_left;
    QPushButton *pushButton_Down;
    QListWidget *listWidgetInformations;

    void setupUi(QWidget *ClientCrawler)
    {
        if (ClientCrawler->objectName().isEmpty())
            ClientCrawler->setObjectName(QString::fromUtf8("ClientCrawler"));
        ClientCrawler->resize(800, 600);
        lineEdit_Adresse = new QLineEdit(ClientCrawler);
        lineEdit_Adresse->setObjectName(QString::fromUtf8("lineEdit_Adresse"));
        lineEdit_Adresse->setGeometry(QRect(30, 350, 113, 24));
        spinBox_Port = new QSpinBox(ClientCrawler);
        spinBox_Port->setObjectName(QString::fromUtf8("spinBox_Port"));
        spinBox_Port->setGeometry(QRect(200, 310, 42, 25));
        pushButtonConnexion = new QPushButton(ClientCrawler);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(260, 400, 80, 24));
        pushButton_Quitter = new QPushButton(ClientCrawler);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(380, 400, 80, 24));
        lcdNumber = new QLCDNumber(ClientCrawler);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(310, 460, 64, 23));
        label = new QLabel(ClientCrawler);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 290, 95, 16));
        label_2 = new QLabel(ClientCrawler);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 330, 113, 16));
        label_3 = new QLabel(ClientCrawler);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 470, 52, 16));
        label_4 = new QLabel(ClientCrawler);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 120, 76, 16));
        pushButton_up = new QPushButton(ClientCrawler);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(520, 300, 31, 24));
        pushButton_up->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../images/arrow_up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_up->setIcon(icon);
        pushButton_Right = new QPushButton(ClientCrawler);
        pushButton_Right->setObjectName(QString::fromUtf8("pushButton_Right"));
        pushButton_Right->setGeometry(QRect(550, 330, 31, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../images/arrow_right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Right->setIcon(icon1);
        pushButton_left = new QPushButton(ClientCrawler);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));
        pushButton_left->setGeometry(QRect(480, 330, 31, 24));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../images/arrow_left.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_left->setIcon(icon2);
        pushButton_Down = new QPushButton(ClientCrawler);
        pushButton_Down->setObjectName(QString::fromUtf8("pushButton_Down"));
        pushButton_Down->setGeometry(QRect(520, 360, 31, 24));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../images/arrow_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Down->setIcon(icon3);
        listWidgetInformations = new QListWidget(ClientCrawler);
        listWidgetInformations->setObjectName(QString::fromUtf8("listWidgetInformations"));
        listWidgetInformations->setGeometry(QRect(270, 150, 191, 141));

        retranslateUi(ClientCrawler);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), ClientCrawler, SLOT(close()));

        QMetaObject::connectSlotsByName(ClientCrawler);
    } // setupUi

    void retranslateUi(QWidget *ClientCrawler)
    {
        ClientCrawler->setWindowTitle(QCoreApplication::translate("ClientCrawler", "ClientCrawler", nullptr));
        pushButtonConnexion->setText(QCoreApplication::translate("ClientCrawler", "Connexion", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("ClientCrawler", "Quitter", nullptr));
        label->setText(QCoreApplication::translate("ClientCrawler", "Numero de port", nullptr));
        label_2->setText(QCoreApplication::translate("ClientCrawler", "Adresse du serveur", nullptr));
        label_3->setText(QCoreApplication::translate("ClientCrawler", "Distance", nullptr));
        label_4->setText(QCoreApplication::translate("ClientCrawler", "Informations", nullptr));
        pushButton_up->setText(QString());
        pushButton_Right->setText(QString());
        pushButton_left->setText(QString());
        pushButton_Down->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ClientCrawler: public Ui_ClientCrawler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTCRAWLER_H
