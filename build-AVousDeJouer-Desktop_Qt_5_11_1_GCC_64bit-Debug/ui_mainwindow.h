/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLinux;
    QAction *actionWindows;
    QAction *actionOS_X_Lion;
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget6;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QMenuBar *menuBar;
    QMenu *menuLangages;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 497);
        actionLinux = new QAction(MainWindow);
        actionLinux->setObjectName(QStringLiteral("actionLinux"));
        actionWindows = new QAction(MainWindow);
        actionWindows->setObjectName(QStringLiteral("actionWindows"));
        actionOS_X_Lion = new QAction(MainWindow);
        actionOS_X_Lion->setObjectName(QStringLiteral("actionOS_X_Lion"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 30, 231, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(144, 235, 239);"));

        horizontalLayout->addWidget(textEdit);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(140, 70, 141, 27));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(widget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(70, 110, 251, 25));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(widget2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_3->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget2);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_3->addWidget(checkBox_3);

        widget3 = new QWidget(centralWidget);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(70, 150, 251, 25));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget3);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_4->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget3);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_4->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(widget3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout_4->addWidget(radioButton_3);

        widget4 = new QWidget(centralWidget);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(70, 190, 254, 27));
        horizontalLayout_5 = new QHBoxLayout(widget4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget4);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_5->addWidget(pushButton_3);

        widget5 = new QWidget(centralWidget);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(10, 250, 370, 27));
        horizontalLayout_6 = new QHBoxLayout(widget5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButton_4 = new QPushButton(widget5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(164, 0, 0);"));

        horizontalLayout_6->addWidget(pushButton_4);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        widget6 = new QWidget(centralWidget);
        widget6->setObjectName(QStringLiteral("widget6"));
        widget6->setGeometry(QRect(70, 290, 251, 111));
        verticalLayout = new QVBoxLayout(widget6);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget6);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        textEdit_2 = new QTextEdit(widget6);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));"));

        verticalLayout->addWidget(textEdit_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuLangages = new QMenu(menuBar);
        menuLangages->setObjectName(QStringLiteral("menuLangages"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuLangages->menuAction());
        menuLangages->addAction(actionLinux);
        menuLangages->addAction(actionWindows);
        menuLangages->addAction(actionOS_X_Lion);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLinux->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        actionWindows->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        actionOS_X_Lion->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        label->setText(QApplication::translate("MainWindow", "Entrez votre code :", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Choix :", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Linux", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Windows", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "OS X Lion", nullptr));

        checkBox->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Linux", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Windows", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "OS X Lion", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\303\251v\303\250nement :", nullptr));
        menuLangages->setTitle(QApplication::translate("MainWindow", "Langages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
