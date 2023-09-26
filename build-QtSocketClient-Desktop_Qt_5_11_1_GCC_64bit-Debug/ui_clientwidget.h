/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QGroupBox *groupBoxConnexionSeveur;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAdresseIPServeur;
    QLineEdit *lineEditAdresseIPServeur;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelNumeroPortServeur;
    QLineEdit *lineEditNumeroPortServeur;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *labelEtatConnexion;
    QTextEdit *textEditEtatConnexion;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonConnexion;
    QGroupBox *groupBoxInformationsClient;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonOrdinateur;
    QPushButton *pushButtonUtilisateur;
    QPushButton *pushButtonArchitecture;
    QPushButton *pushButtonOS;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditOrdinateur;
    QLineEdit *lineEditUtilisateur;
    QLineEdit *lineEditArchitecture;
    QLineEdit *lineEditOS;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QStringLiteral("ClientWidget"));
        ClientWidget->resize(541, 391);
        groupBoxConnexionSeveur = new QGroupBox(ClientWidget);
        groupBoxConnexionSeveur->setObjectName(QStringLiteral("groupBoxConnexionSeveur"));
        groupBoxConnexionSeveur->setGeometry(QRect(10, 20, 521, 151));
        layoutWidget = new QWidget(groupBoxConnexionSeveur);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 271, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelAdresseIPServeur = new QLabel(layoutWidget);
        labelAdresseIPServeur->setObjectName(QStringLiteral("labelAdresseIPServeur"));

        horizontalLayout->addWidget(labelAdresseIPServeur);

        lineEditAdresseIPServeur = new QLineEdit(layoutWidget);
        lineEditAdresseIPServeur->setObjectName(QStringLiteral("lineEditAdresseIPServeur"));

        horizontalLayout->addWidget(lineEditAdresseIPServeur);

        layoutWidget1 = new QWidget(groupBoxConnexionSeveur);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 70, 271, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelNumeroPortServeur = new QLabel(layoutWidget1);
        labelNumeroPortServeur->setObjectName(QStringLiteral("labelNumeroPortServeur"));

        horizontalLayout_2->addWidget(labelNumeroPortServeur);

        lineEditNumeroPortServeur = new QLineEdit(layoutWidget1);
        lineEditNumeroPortServeur->setObjectName(QStringLiteral("lineEditNumeroPortServeur"));

        horizontalLayout_2->addWidget(lineEditNumeroPortServeur);

        layoutWidget2 = new QWidget(groupBoxConnexionSeveur);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(290, 40, 221, 95));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelEtatConnexion = new QLabel(layoutWidget2);
        labelEtatConnexion->setObjectName(QStringLiteral("labelEtatConnexion"));

        verticalLayout->addWidget(labelEtatConnexion);

        textEditEtatConnexion = new QTextEdit(layoutWidget2);
        textEditEtatConnexion->setObjectName(QStringLiteral("textEditEtatConnexion"));

        verticalLayout->addWidget(textEditEtatConnexion);

        layoutWidget3 = new QWidget(groupBoxConnexionSeveur);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 100, 271, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonQuitter = new QPushButton(layoutWidget3);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout_3->addWidget(pushButtonQuitter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonConnexion = new QPushButton(layoutWidget3);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));

        horizontalLayout_3->addWidget(pushButtonConnexion);

        groupBoxInformationsClient = new QGroupBox(ClientWidget);
        groupBoxInformationsClient->setObjectName(QStringLiteral("groupBoxInformationsClient"));
        groupBoxInformationsClient->setGeometry(QRect(10, 190, 521, 181));
        layoutWidget4 = new QWidget(groupBoxInformationsClient);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 40, 181, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonOrdinateur = new QPushButton(layoutWidget4);
        pushButtonOrdinateur->setObjectName(QStringLiteral("pushButtonOrdinateur"));

        verticalLayout_2->addWidget(pushButtonOrdinateur);

        pushButtonUtilisateur = new QPushButton(layoutWidget4);
        pushButtonUtilisateur->setObjectName(QStringLiteral("pushButtonUtilisateur"));

        verticalLayout_2->addWidget(pushButtonUtilisateur);

        pushButtonArchitecture = new QPushButton(layoutWidget4);
        pushButtonArchitecture->setObjectName(QStringLiteral("pushButtonArchitecture"));

        verticalLayout_2->addWidget(pushButtonArchitecture);

        pushButtonOS = new QPushButton(layoutWidget4);
        pushButtonOS->setObjectName(QStringLiteral("pushButtonOS"));

        verticalLayout_2->addWidget(pushButtonOS);

        layoutWidget5 = new QWidget(groupBoxInformationsClient);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(200, 40, 311, 121));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEditOrdinateur = new QLineEdit(layoutWidget5);
        lineEditOrdinateur->setObjectName(QStringLiteral("lineEditOrdinateur"));

        verticalLayout_3->addWidget(lineEditOrdinateur);

        lineEditUtilisateur = new QLineEdit(layoutWidget5);
        lineEditUtilisateur->setObjectName(QStringLiteral("lineEditUtilisateur"));

        verticalLayout_3->addWidget(lineEditUtilisateur);

        lineEditArchitecture = new QLineEdit(layoutWidget5);
        lineEditArchitecture->setObjectName(QStringLiteral("lineEditArchitecture"));

        verticalLayout_3->addWidget(lineEditArchitecture);

        lineEditOS = new QLineEdit(layoutWidget5);
        lineEditOS->setObjectName(QStringLiteral("lineEditOS"));

        verticalLayout_3->addWidget(lineEditOS);


        retranslateUi(ClientWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ClientWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QApplication::translate("ClientWidget", "ClientWidget", nullptr));
        groupBoxConnexionSeveur->setTitle(QApplication::translate("ClientWidget", "Connexion au Serveur", nullptr));
        labelAdresseIPServeur->setText(QApplication::translate("ClientWidget", "Adresse IP du serveur:", nullptr));
        lineEditAdresseIPServeur->setText(QApplication::translate("ClientWidget", "172.18.58.70", nullptr));
        labelNumeroPortServeur->setText(QApplication::translate("ClientWidget", "Num\303\251ro de port du serveur:", nullptr));
        lineEditNumeroPortServeur->setText(QApplication::translate("ClientWidget", "1025", nullptr));
        labelEtatConnexion->setText(QApplication::translate("ClientWidget", "Etat de la connexion:", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ClientWidget", "Quitter", nullptr));
        pushButtonConnexion->setText(QApplication::translate("ClientWidget", "Connexion", nullptr));
        groupBoxInformationsClient->setTitle(QApplication::translate("ClientWidget", "Informations Client", nullptr));
        pushButtonOrdinateur->setText(QApplication::translate("ClientWidget", "Nom de l'ordinateur distant", nullptr));
        pushButtonUtilisateur->setText(QApplication::translate("ClientWidget", "Nom de l'utilisateur", nullptr));
        pushButtonArchitecture->setText(QApplication::translate("ClientWidget", "Architecture processeur", nullptr));
        pushButtonOS->setText(QApplication::translate("ClientWidget", "OS de l'ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
