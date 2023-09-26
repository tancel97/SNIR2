/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEditAfficher;
    QSpacerItem *verticalSpacerLigne5;
    QHBoxLayout *horizontalLayoutLigne4;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonPlus;
    QSpacerItem *verticalSpacerLigne4;
    QHBoxLayout *horizontalLayoutLigne3;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonMoins;
    QSpacerItem *verticalSpacerLigne3;
    QHBoxLayout *horizontalLayoutLigne2;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonMultiplier;
    QSpacerItem *verticalSpacerLigne2;
    QHBoxLayout *horizontalLayoutLigne1;
    QPushButton *pushButtonClear;
    QPushButton *pushButton0;
    QPushButton *pushButtonEgal;
    QPushButton *pushButtonDiviser;
    QSpacerItem *verticalSpacerLigne1;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 349);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEditAfficher = new QTextEdit(Widget);
        textEditAfficher->setObjectName(QStringLiteral("textEditAfficher"));

        gridLayout->addWidget(textEditAfficher, 0, 0, 1, 1);

        verticalSpacerLigne5 = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacerLigne5, 1, 0, 1, 1);

        horizontalLayoutLigne4 = new QHBoxLayout();
        horizontalLayoutLigne4->setSpacing(6);
        horizontalLayoutLigne4->setObjectName(QStringLiteral("horizontalLayoutLigne4"));
        pushButton7 = new QPushButton(Widget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));

        horizontalLayoutLigne4->addWidget(pushButton7);

        pushButton8 = new QPushButton(Widget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));

        horizontalLayoutLigne4->addWidget(pushButton8);

        pushButton9 = new QPushButton(Widget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));

        horizontalLayoutLigne4->addWidget(pushButton9);

        pushButtonPlus = new QPushButton(Widget);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));

        horizontalLayoutLigne4->addWidget(pushButtonPlus);


        gridLayout->addLayout(horizontalLayoutLigne4, 2, 0, 1, 1);

        verticalSpacerLigne4 = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacerLigne4, 3, 0, 1, 1);

        horizontalLayoutLigne3 = new QHBoxLayout();
        horizontalLayoutLigne3->setSpacing(6);
        horizontalLayoutLigne3->setObjectName(QStringLiteral("horizontalLayoutLigne3"));
        pushButton4 = new QPushButton(Widget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));

        horizontalLayoutLigne3->addWidget(pushButton4);

        pushButton5 = new QPushButton(Widget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));

        horizontalLayoutLigne3->addWidget(pushButton5);

        pushButton6 = new QPushButton(Widget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));

        horizontalLayoutLigne3->addWidget(pushButton6);

        pushButtonMoins = new QPushButton(Widget);
        pushButtonMoins->setObjectName(QStringLiteral("pushButtonMoins"));

        horizontalLayoutLigne3->addWidget(pushButtonMoins);


        gridLayout->addLayout(horizontalLayoutLigne3, 4, 0, 1, 1);

        verticalSpacerLigne3 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacerLigne3, 5, 0, 1, 1);

        horizontalLayoutLigne2 = new QHBoxLayout();
        horizontalLayoutLigne2->setSpacing(6);
        horizontalLayoutLigne2->setObjectName(QStringLiteral("horizontalLayoutLigne2"));
        pushButton1 = new QPushButton(Widget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));

        horizontalLayoutLigne2->addWidget(pushButton1);

        pushButton2 = new QPushButton(Widget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));

        horizontalLayoutLigne2->addWidget(pushButton2);

        pushButton3 = new QPushButton(Widget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));

        horizontalLayoutLigne2->addWidget(pushButton3);

        pushButtonMultiplier = new QPushButton(Widget);
        pushButtonMultiplier->setObjectName(QStringLiteral("pushButtonMultiplier"));

        horizontalLayoutLigne2->addWidget(pushButtonMultiplier);


        gridLayout->addLayout(horizontalLayoutLigne2, 6, 0, 1, 1);

        verticalSpacerLigne2 = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacerLigne2, 7, 0, 1, 1);

        horizontalLayoutLigne1 = new QHBoxLayout();
        horizontalLayoutLigne1->setSpacing(6);
        horizontalLayoutLigne1->setObjectName(QStringLiteral("horizontalLayoutLigne1"));
        pushButtonClear = new QPushButton(Widget);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));

        horizontalLayoutLigne1->addWidget(pushButtonClear);

        pushButton0 = new QPushButton(Widget);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));

        horizontalLayoutLigne1->addWidget(pushButton0);

        pushButtonEgal = new QPushButton(Widget);
        pushButtonEgal->setObjectName(QStringLiteral("pushButtonEgal"));

        horizontalLayoutLigne1->addWidget(pushButtonEgal);

        pushButtonDiviser = new QPushButton(Widget);
        pushButtonDiviser->setObjectName(QStringLiteral("pushButtonDiviser"));

        horizontalLayoutLigne1->addWidget(pushButtonDiviser);


        gridLayout->addLayout(horizontalLayoutLigne1, 8, 0, 1, 1);

        verticalSpacerLigne1 = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacerLigne1, 9, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton7->setText(QApplication::translate("Widget", "7", nullptr));
        pushButton8->setText(QApplication::translate("Widget", "8", nullptr));
        pushButton9->setText(QApplication::translate("Widget", "9", nullptr));
        pushButtonPlus->setText(QApplication::translate("Widget", "+", nullptr));
        pushButton4->setText(QApplication::translate("Widget", "4", nullptr));
        pushButton5->setText(QApplication::translate("Widget", "5", nullptr));
        pushButton6->setText(QApplication::translate("Widget", "6", nullptr));
        pushButtonMoins->setText(QApplication::translate("Widget", "-", nullptr));
        pushButton1->setText(QApplication::translate("Widget", "1", nullptr));
        pushButton2->setText(QApplication::translate("Widget", "2", nullptr));
        pushButton3->setText(QApplication::translate("Widget", "3", nullptr));
        pushButtonMultiplier->setText(QApplication::translate("Widget", "x", nullptr));
        pushButtonClear->setText(QApplication::translate("Widget", "c", nullptr));
        pushButton0->setText(QApplication::translate("Widget", "0", nullptr));
        pushButtonEgal->setText(QApplication::translate("Widget", "=", nullptr));
        pushButtonDiviser->setText(QApplication::translate("Widget", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
