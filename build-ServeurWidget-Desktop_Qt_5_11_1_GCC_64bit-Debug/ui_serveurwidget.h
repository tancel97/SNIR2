/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QPushButton *pushButtonLancerServeur;
    QPushButton *pushButtonQuitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumeroPort;
    QSpinBox *spinBoxNumeroPort;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *labelClients;
    QTextEdit *textEditClients;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QStringLiteral("ServeurWidget"));
        ServeurWidget->resize(400, 362);
        pushButtonLancerServeur = new QPushButton(ServeurWidget);
        pushButtonLancerServeur->setObjectName(QStringLiteral("pushButtonLancerServeur"));
        pushButtonLancerServeur->setGeometry(QRect(20, 60, 351, 25));
        pushButtonQuitter = new QPushButton(ServeurWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(20, 320, 351, 25));
        widget = new QWidget(ServeurWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 351, 28));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelNumeroPort = new QLabel(widget);
        labelNumeroPort->setObjectName(QStringLiteral("labelNumeroPort"));

        horizontalLayout->addWidget(labelNumeroPort);

        spinBoxNumeroPort = new QSpinBox(widget);
        spinBoxNumeroPort->setObjectName(QStringLiteral("spinBoxNumeroPort"));
        spinBoxNumeroPort->setMaximum(9999);
        spinBoxNumeroPort->setValue(1025);

        horizontalLayout->addWidget(spinBoxNumeroPort);

        widget1 = new QWidget(ServeurWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 100, 351, 211));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelClients = new QLabel(widget1);
        labelClients->setObjectName(QStringLiteral("labelClients"));

        verticalLayout->addWidget(labelClients);

        textEditClients = new QTextEdit(widget1);
        textEditClients->setObjectName(QStringLiteral("textEditClients"));

        verticalLayout->addWidget(textEditClients);


        retranslateUi(ServeurWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        pushButtonLancerServeur->setText(QApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ServeurWidget", "Quitter", nullptr));
        labelNumeroPort->setText(QApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
        labelClients->setText(QApplication::translate("ServeurWidget", "Clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
