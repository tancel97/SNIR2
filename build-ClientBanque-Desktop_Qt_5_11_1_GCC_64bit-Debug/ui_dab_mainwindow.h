/********************************************************************************
** Form generated from reading UI file 'dab_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_MAINWINDOW_H
#define UI_DAB_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonConnexion;
    QGroupBox *groupBoxOperations;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButtonNumeroDeCompte;
    QLabel *labelMontant;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditNumeroDeCompte;
    QLineEdit *lineEditMontant;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *radioButtonSolde;
    QRadioButton *radioButtonRetrait;
    QRadioButton *radioButtonDepot;
    QPushButton *pushButtonEnvoi;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLabel *labelEtat;
    QTextEdit *textEditEtat;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAdresse;
    QLineEdit *lineEditAdresse;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPort;
    QLineEdit *lineEditPort;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelMessage;
    QLineEdit *lineEditMessage;
    QPushButton *pushButtonQuitter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QStringLiteral("DAB_MainWindow"));
        DAB_MainWindow->resize(471, 446);
        centralWidget = new QWidget(DAB_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonConnexion = new QPushButton(centralWidget);
        pushButtonConnexion->setObjectName(QStringLiteral("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(90, 90, 80, 25));
        groupBoxOperations = new QGroupBox(centralWidget);
        groupBoxOperations->setObjectName(QStringLiteral("groupBoxOperations"));
        groupBoxOperations->setGeometry(QRect(20, 190, 431, 161));
        layoutWidget = new QWidget(groupBoxOperations);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 30, 131, 61));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonNumeroDeCompte = new QPushButton(layoutWidget);
        pushButtonNumeroDeCompte->setObjectName(QStringLiteral("pushButtonNumeroDeCompte"));

        verticalLayout_3->addWidget(pushButtonNumeroDeCompte);

        labelMontant = new QLabel(layoutWidget);
        labelMontant->setObjectName(QStringLiteral("labelMontant"));

        verticalLayout_3->addWidget(labelMontant);

        layoutWidget1 = new QWidget(groupBoxOperations);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(150, 30, 151, 61));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEditNumeroDeCompte = new QLineEdit(layoutWidget1);
        lineEditNumeroDeCompte->setObjectName(QStringLiteral("lineEditNumeroDeCompte"));

        verticalLayout_4->addWidget(lineEditNumeroDeCompte);

        lineEditMontant = new QLineEdit(layoutWidget1);
        lineEditMontant->setObjectName(QStringLiteral("lineEditMontant"));

        verticalLayout_4->addWidget(lineEditMontant);

        layoutWidget2 = new QWidget(groupBoxOperations);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(320, 30, 101, 121));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        radioButtonSolde = new QRadioButton(layoutWidget2);
        radioButtonSolde->setObjectName(QStringLiteral("radioButtonSolde"));
        radioButtonSolde->setChecked(true);

        verticalLayout_5->addWidget(radioButtonSolde);

        radioButtonRetrait = new QRadioButton(layoutWidget2);
        radioButtonRetrait->setObjectName(QStringLiteral("radioButtonRetrait"));

        verticalLayout_5->addWidget(radioButtonRetrait);

        radioButtonDepot = new QRadioButton(layoutWidget2);
        radioButtonDepot->setObjectName(QStringLiteral("radioButtonDepot"));

        verticalLayout_5->addWidget(radioButtonDepot);

        pushButtonEnvoi = new QPushButton(layoutWidget2);
        pushButtonEnvoi->setObjectName(QStringLiteral("pushButtonEnvoi"));

        verticalLayout_5->addWidget(pushButtonEnvoi);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(240, 20, 211, 101));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelEtat = new QLabel(layoutWidget3);
        labelEtat->setObjectName(QStringLiteral("labelEtat"));

        verticalLayout->addWidget(labelEtat);

        textEditEtat = new QTextEdit(layoutWidget3);
        textEditEtat->setObjectName(QStringLiteral("textEditEtat"));

        verticalLayout->addWidget(textEditEtat);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 20, 211, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelAdresse = new QLabel(layoutWidget4);
        labelAdresse->setObjectName(QStringLiteral("labelAdresse"));

        horizontalLayout->addWidget(labelAdresse);

        lineEditAdresse = new QLineEdit(layoutWidget4);
        lineEditAdresse->setObjectName(QStringLiteral("lineEditAdresse"));

        horizontalLayout->addWidget(lineEditAdresse);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 50, 211, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelPort = new QLabel(layoutWidget5);
        labelPort->setObjectName(QStringLiteral("labelPort"));

        horizontalLayout_2->addWidget(labelPort);

        lineEditPort = new QLineEdit(layoutWidget5);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        horizontalLayout_2->addWidget(lineEditPort);

        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 130, 431, 51));
        verticalLayout_2 = new QVBoxLayout(layoutWidget6);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelMessage = new QLabel(layoutWidget6);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));

        verticalLayout_2->addWidget(labelMessage);

        lineEditMessage = new QLineEdit(layoutWidget6);
        lineEditMessage->setObjectName(QStringLiteral("lineEditMessage"));

        verticalLayout_2->addWidget(lineEditMessage);

        pushButtonQuitter = new QPushButton(centralWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(190, 360, 80, 25));
        DAB_MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DAB_MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 471, 22));
        DAB_MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DAB_MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DAB_MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DAB_MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DAB_MainWindow->setStatusBar(statusBar);

        retranslateUi(DAB_MainWindow);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), DAB_MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(DAB_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DAB_MainWindow)
    {
        DAB_MainWindow->setWindowTitle(QApplication::translate("DAB_MainWindow", "DAB_MainWindow", nullptr));
        pushButtonConnexion->setText(QApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        groupBoxOperations->setTitle(QApplication::translate("DAB_MainWindow", "Op\303\251rations envoy\303\251es \303\240 la banque:", nullptr));
        pushButtonNumeroDeCompte->setText(QApplication::translate("DAB_MainWindow", "Num\303\251ro de compte", nullptr));
        labelMontant->setText(QApplication::translate("DAB_MainWindow", "Montant:", nullptr));
        lineEditNumeroDeCompte->setText(QApplication::translate("DAB_MainWindow", "1234", nullptr));
        lineEditMontant->setText(QString());
        radioButtonSolde->setText(QApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait->setText(QApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot->setText(QApplication::translate("DAB_MainWindow", "D\303\251p\303\264t", nullptr));
        pushButtonEnvoi->setText(QApplication::translate("DAB_MainWindow", "Envoi", nullptr));
        labelEtat->setText(QApplication::translate("DAB_MainWindow", "Etat de la connexion:", nullptr));
        labelAdresse->setText(QApplication::translate("DAB_MainWindow", "Adresse:", nullptr));
        lineEditAdresse->setText(QApplication::translate("DAB_MainWindow", "172.18.58.104", nullptr));
        labelPort->setText(QApplication::translate("DAB_MainWindow", "Port:", nullptr));
        lineEditPort->setText(QApplication::translate("DAB_MainWindow", "8888", nullptr));
        labelMessage->setText(QApplication::translate("DAB_MainWindow", "Message de la banque:", nullptr));
        lineEditMessage->setText(QString());
        pushButtonQuitter->setText(QApplication::translate("DAB_MainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
