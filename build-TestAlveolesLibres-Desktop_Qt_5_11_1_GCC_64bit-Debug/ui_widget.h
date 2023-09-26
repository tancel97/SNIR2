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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *labelNumeroAlveolesLibres;
    QLabel *labelRangeesEtColonnesOccupees;
    QPushButton *pushButtonReserver;
    QPushButton *pushButtonLiberer;
    QPushButton *pushButtonQuitter;
    QListWidget *listWidgetAlveolesLibres;
    QListWidget *listWidgetAlveolesOccupees;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(391, 300);
        labelNumeroAlveolesLibres = new QLabel(Widget);
        labelNumeroAlveolesLibres->setObjectName(QStringLiteral("labelNumeroAlveolesLibres"));
        labelNumeroAlveolesLibres->setGeometry(QRect(10, 40, 141, 17));
        labelRangeesEtColonnesOccupees = new QLabel(Widget);
        labelRangeesEtColonnesOccupees->setObjectName(QStringLiteral("labelRangeesEtColonnesOccupees"));
        labelRangeesEtColonnesOccupees->setGeometry(QRect(220, 40, 171, 20));
        pushButtonReserver = new QPushButton(Widget);
        pushButtonReserver->setObjectName(QStringLiteral("pushButtonReserver"));
        pushButtonReserver->setGeometry(QRect(140, 120, 80, 25));
        pushButtonLiberer = new QPushButton(Widget);
        pushButtonLiberer->setObjectName(QStringLiteral("pushButtonLiberer"));
        pushButtonLiberer->setGeometry(QRect(140, 160, 80, 25));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(140, 200, 80, 25));
        listWidgetAlveolesLibres = new QListWidget(Widget);
        listWidgetAlveolesLibres->setObjectName(QStringLiteral("listWidgetAlveolesLibres"));
        listWidgetAlveolesLibres->setGeometry(QRect(20, 60, 101, 171));
        listWidgetAlveolesOccupees = new QListWidget(Widget);
        listWidgetAlveolesOccupees->setObjectName(QStringLiteral("listWidgetAlveolesOccupees"));
        listWidgetAlveolesOccupees->setGeometry(QRect(240, 60, 101, 171));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelNumeroAlveolesLibres->setText(QApplication::translate("Widget", "Num\303\251ro d'alv\303\251oles libres", nullptr));
        labelRangeesEtColonnesOccupees->setText(QApplication::translate("Widget", "Rang\303\251e & colonnes occup\303\251es", nullptr));
        pushButtonReserver->setText(QApplication::translate("Widget", "R\303\251server >>", nullptr));
        pushButtonLiberer->setText(QApplication::translate("Widget", "<< Lib\303\251rer", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
