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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tabInfosPersos;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayoutSexe;
    QLabel *labelSexe;
    QRadioButton *radioButtonFemme;
    QRadioButton *radioButtonHomme;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayoutAge;
    QLabel *labelAge;
    QSpinBox *spinBoxAge;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayoutPoids;
    QLabel *labelPoids;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayoutTaille;
    QLabel *labelTaille;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayoutPasser;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonSuite;
    QSpacerItem *horizontalSpacer_4;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayoutNom;
    QLabel *labelNom;
    QLineEdit *lineEditNom;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayoutPrenom;
    QLabel *labelPrenom;
    QLineEdit *lineEditPrenom;
    QWidget *tabCalculPoidsIdeal;
    QPushButton *pushButtonDevine;
    QPushButton *pushButtonLorentz;
    QPushButton *pushButtonLorentzAge;
    QTextEdit *textEditAffichage;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayoutQuitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 465);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 361, 361));
        tabInfosPersos = new QWidget();
        tabInfosPersos->setObjectName(QStringLiteral("tabInfosPersos"));
        layoutWidget = new QWidget(tabInfosPersos);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 100, 221, 31));
        horizontalLayoutSexe = new QHBoxLayout(layoutWidget);
        horizontalLayoutSexe->setSpacing(6);
        horizontalLayoutSexe->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutSexe->setObjectName(QStringLiteral("horizontalLayoutSexe"));
        horizontalLayoutSexe->setContentsMargins(0, 0, 0, 0);
        labelSexe = new QLabel(layoutWidget);
        labelSexe->setObjectName(QStringLiteral("labelSexe"));

        horizontalLayoutSexe->addWidget(labelSexe);

        radioButtonFemme = new QRadioButton(layoutWidget);
        radioButtonFemme->setObjectName(QStringLiteral("radioButtonFemme"));

        horizontalLayoutSexe->addWidget(radioButtonFemme);

        radioButtonHomme = new QRadioButton(layoutWidget);
        radioButtonHomme->setObjectName(QStringLiteral("radioButtonHomme"));

        horizontalLayoutSexe->addWidget(radioButtonHomme);

        layoutWidget1 = new QWidget(tabInfosPersos);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 140, 221, 28));
        horizontalLayoutAge = new QHBoxLayout(layoutWidget1);
        horizontalLayoutAge->setSpacing(6);
        horizontalLayoutAge->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutAge->setObjectName(QStringLiteral("horizontalLayoutAge"));
        horizontalLayoutAge->setContentsMargins(0, 0, 0, 0);
        labelAge = new QLabel(layoutWidget1);
        labelAge->setObjectName(QStringLiteral("labelAge"));

        horizontalLayoutAge->addWidget(labelAge);

        spinBoxAge = new QSpinBox(layoutWidget1);
        spinBoxAge->setObjectName(QStringLiteral("spinBoxAge"));
        spinBoxAge->setMinimum(1);
        spinBoxAge->setMaximum(200);

        horizontalLayoutAge->addWidget(spinBoxAge);

        layoutWidget2 = new QWidget(tabInfosPersos);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 180, 221, 28));
        horizontalLayoutPoids = new QHBoxLayout(layoutWidget2);
        horizontalLayoutPoids->setSpacing(6);
        horizontalLayoutPoids->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutPoids->setObjectName(QStringLiteral("horizontalLayoutPoids"));
        horizontalLayoutPoids->setContentsMargins(0, 0, 0, 0);
        labelPoids = new QLabel(layoutWidget2);
        labelPoids->setObjectName(QStringLiteral("labelPoids"));

        horizontalLayoutPoids->addWidget(labelPoids);

        doubleSpinBoxPoids = new QDoubleSpinBox(layoutWidget2);
        doubleSpinBoxPoids->setObjectName(QStringLiteral("doubleSpinBoxPoids"));
        doubleSpinBoxPoids->setMinimum(15);
        doubleSpinBoxPoids->setMaximum(300);
        doubleSpinBoxPoids->setSingleStep(0.1);

        horizontalLayoutPoids->addWidget(doubleSpinBoxPoids);

        layoutWidget3 = new QWidget(tabInfosPersos);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(60, 220, 221, 28));
        horizontalLayoutTaille = new QHBoxLayout(layoutWidget3);
        horizontalLayoutTaille->setSpacing(6);
        horizontalLayoutTaille->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutTaille->setObjectName(QStringLiteral("horizontalLayoutTaille"));
        horizontalLayoutTaille->setContentsMargins(0, 0, 0, 0);
        labelTaille = new QLabel(layoutWidget3);
        labelTaille->setObjectName(QStringLiteral("labelTaille"));

        horizontalLayoutTaille->addWidget(labelTaille);

        doubleSpinBoxTaille = new QDoubleSpinBox(layoutWidget3);
        doubleSpinBoxTaille->setObjectName(QStringLiteral("doubleSpinBoxTaille"));
        doubleSpinBoxTaille->setMinimum(0.5);
        doubleSpinBoxTaille->setMaximum(3);
        doubleSpinBoxTaille->setSingleStep(0.01);

        horizontalLayoutTaille->addWidget(doubleSpinBoxTaille);

        layoutWidget4 = new QWidget(tabInfosPersos);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 260, 331, 27));
        horizontalLayoutPasser = new QHBoxLayout(layoutWidget4);
        horizontalLayoutPasser->setSpacing(6);
        horizontalLayoutPasser->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutPasser->setObjectName(QStringLiteral("horizontalLayoutPasser"));
        horizontalLayoutPasser->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPasser->addItem(horizontalSpacer_3);

        pushButtonSuite = new QPushButton(layoutWidget4);
        pushButtonSuite->setObjectName(QStringLiteral("pushButtonSuite"));

        horizontalLayoutPasser->addWidget(pushButtonSuite);

        horizontalSpacer_4 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPasser->addItem(horizontalSpacer_4);

        layoutWidget5 = new QWidget(tabInfosPersos);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(60, 20, 221, 27));
        horizontalLayoutNom = new QHBoxLayout(layoutWidget5);
        horizontalLayoutNom->setSpacing(6);
        horizontalLayoutNom->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutNom->setObjectName(QStringLiteral("horizontalLayoutNom"));
        horizontalLayoutNom->setContentsMargins(0, 0, 0, 0);
        labelNom = new QLabel(layoutWidget5);
        labelNom->setObjectName(QStringLiteral("labelNom"));

        horizontalLayoutNom->addWidget(labelNom);

        lineEditNom = new QLineEdit(layoutWidget5);
        lineEditNom->setObjectName(QStringLiteral("lineEditNom"));

        horizontalLayoutNom->addWidget(lineEditNom);

        layoutWidget6 = new QWidget(tabInfosPersos);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(60, 60, 221, 27));
        horizontalLayoutPrenom = new QHBoxLayout(layoutWidget6);
        horizontalLayoutPrenom->setSpacing(6);
        horizontalLayoutPrenom->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutPrenom->setObjectName(QStringLiteral("horizontalLayoutPrenom"));
        horizontalLayoutPrenom->setContentsMargins(0, 0, 0, 0);
        labelPrenom = new QLabel(layoutWidget6);
        labelPrenom->setObjectName(QStringLiteral("labelPrenom"));

        horizontalLayoutPrenom->addWidget(labelPrenom);

        lineEditPrenom = new QLineEdit(layoutWidget6);
        lineEditPrenom->setObjectName(QStringLiteral("lineEditPrenom"));

        horizontalLayoutPrenom->addWidget(lineEditPrenom);

        tabWidget->addTab(tabInfosPersos, QString());
        tabCalculPoidsIdeal = new QWidget();
        tabCalculPoidsIdeal->setObjectName(QStringLiteral("tabCalculPoidsIdeal"));
        pushButtonDevine = new QPushButton(tabCalculPoidsIdeal);
        pushButtonDevine->setObjectName(QStringLiteral("pushButtonDevine"));
        pushButtonDevine->setGeometry(QRect(40, 180, 281, 25));
        pushButtonLorentz = new QPushButton(tabCalculPoidsIdeal);
        pushButtonLorentz->setObjectName(QStringLiteral("pushButtonLorentz"));
        pushButtonLorentz->setGeometry(QRect(40, 220, 281, 25));
        pushButtonLorentzAge = new QPushButton(tabCalculPoidsIdeal);
        pushButtonLorentzAge->setObjectName(QStringLiteral("pushButtonLorentzAge"));
        pushButtonLorentzAge->setGeometry(QRect(39, 260, 281, 25));
        textEditAffichage = new QTextEdit(tabCalculPoidsIdeal);
        textEditAffichage->setObjectName(QStringLiteral("textEditAffichage"));
        textEditAffichage->setGeometry(QRect(43, 19, 281, 141));
        tabWidget->addTab(tabCalculPoidsIdeal, QString());
        layoutWidget7 = new QWidget(Widget);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(20, 390, 361, 27));
        horizontalLayoutQuitter = new QHBoxLayout(layoutWidget7);
        horizontalLayoutQuitter->setSpacing(6);
        horizontalLayoutQuitter->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutQuitter->setObjectName(QStringLiteral("horizontalLayoutQuitter"));
        horizontalLayoutQuitter->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutQuitter->addItem(horizontalSpacer);

        pushButtonQuitter = new QPushButton(layoutWidget7);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayoutQuitter->addWidget(pushButtonQuitter);

        horizontalSpacer_2 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutQuitter->addItem(horizontalSpacer_2);


        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelSexe->setText(QApplication::translate("Widget", "Sexe", nullptr));
        radioButtonFemme->setText(QApplication::translate("Widget", "Femme", nullptr));
        radioButtonHomme->setText(QApplication::translate("Widget", "Homme", nullptr));
        labelAge->setText(QApplication::translate("Widget", "Age", nullptr));
        labelPoids->setText(QApplication::translate("Widget", "Poids (kg)", nullptr));
        labelTaille->setText(QApplication::translate("Widget", "Taille (m)", nullptr));
        pushButtonSuite->setText(QApplication::translate("Widget", "Suite", nullptr));
        labelNom->setText(QApplication::translate("Widget", "Nom", nullptr));
        labelPrenom->setText(QApplication::translate("Widget", "Prenom", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInfosPersos), QApplication::translate("Widget", "Information Personnelles", nullptr));
        pushButtonDevine->setText(QApplication::translate("Widget", "Poids Ideal : Formule de Devine", nullptr));
        pushButtonLorentz->setText(QApplication::translate("Widget", "Poids Ideal : Formule de Lorentz", nullptr));
        pushButtonLorentzAge->setText(QApplication::translate("Widget", "Poids Ideal : Formule de Lorentz selon l'age", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCalculPoidsIdeal), QApplication::translate("Widget", "Calcul du poids id\303\251al", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
