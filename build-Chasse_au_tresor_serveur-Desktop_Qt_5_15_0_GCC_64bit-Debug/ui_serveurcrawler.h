/********************************************************************************
** Form generated from reading UI file 'serveurcrawler.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURCRAWLER_H
#define UI_SERVEURCRAWLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurCrawler
{
public:
    QPushButton *pushButton_Quitter;
    QPushButton *pushButtonLancement;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_Port;

    void setupUi(QWidget *ServeurCrawler)
    {
        if (ServeurCrawler->objectName().isEmpty())
            ServeurCrawler->setObjectName(QString::fromUtf8("ServeurCrawler"));
        ServeurCrawler->resize(800, 600);
        pushButton_Quitter = new QPushButton(ServeurCrawler);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(350, 430, 80, 24));
        pushButtonLancement = new QPushButton(ServeurCrawler);
        pushButtonLancement->setObjectName(QString::fromUtf8("pushButtonLancement"));
        pushButtonLancement->setGeometry(QRect(40, 430, 80, 24));
        widget = new QWidget(ServeurCrawler);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(73, 290, 211, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox_Port = new QSpinBox(widget);
        spinBox_Port->setObjectName(QString::fromUtf8("spinBox_Port"));
        spinBox_Port->setMaximum(1000000);

        horizontalLayout->addWidget(spinBox_Port);


        retranslateUi(ServeurCrawler);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), ServeurCrawler, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurCrawler);
    } // setupUi

    void retranslateUi(QWidget *ServeurCrawler)
    {
        ServeurCrawler->setWindowTitle(QCoreApplication::translate("ServeurCrawler", "ServeurCrawler", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("ServeurCrawler", "Quitter", nullptr));
        pushButtonLancement->setText(QCoreApplication::translate("ServeurCrawler", "Lancement", nullptr));
        label->setText(QCoreApplication::translate("ServeurCrawler", "NumeroDePort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurCrawler: public Ui_ServeurCrawler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURCRAWLER_H
