/********************************************************************************
** Form generated from reading UI file 'tablet3.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLET3_H
#define UI_TABLET3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tablet3Class
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *opcja1;
    QPushButton *opcja2;
    QPushButton *opcja3;
    QPushButton *opcja4;
    QPushButton *opcja5;
    QPushButton *opcja6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *wyjscie;

    void setupUi(QWidget *tablet3Class)
    {
        if (tablet3Class->objectName().isEmpty())
            tablet3Class->setObjectName(QStringLiteral("tablet3Class"));
        tablet3Class->resize(217, 232);
        formLayoutWidget = new QWidget(tablet3Class);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 10, 160, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        opcja1 = new QPushButton(formLayoutWidget);
        opcja1->setObjectName(QStringLiteral("opcja1"));

        formLayout->setWidget(0, QFormLayout::FieldRole, opcja1);

        opcja2 = new QPushButton(formLayoutWidget);
        opcja2->setObjectName(QStringLiteral("opcja2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, opcja2);

        opcja3 = new QPushButton(formLayoutWidget);
        opcja3->setObjectName(QStringLiteral("opcja3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, opcja3);

        opcja4 = new QPushButton(formLayoutWidget);
        opcja4->setObjectName(QStringLiteral("opcja4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, opcja4);

        opcja5 = new QPushButton(formLayoutWidget);
        opcja5->setObjectName(QStringLiteral("opcja5"));

        formLayout->setWidget(4, QFormLayout::FieldRole, opcja5);

        opcja6 = new QPushButton(formLayoutWidget);
        opcja6->setObjectName(QStringLiteral("opcja6"));

        formLayout->setWidget(5, QFormLayout::FieldRole, opcja6);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        wyjscie = new QPushButton(tablet3Class);
        wyjscie->setObjectName(QStringLiteral("wyjscie"));
        wyjscie->setGeometry(QRect(40, 200, 146, 23));

        retranslateUi(tablet3Class);
        QObject::connect(opcja1, SIGNAL(clicked()), tablet3Class, SLOT(funkcja1()));
        QObject::connect(wyjscie, SIGNAL(clicked()), tablet3Class, SLOT(close()));
        QObject::connect(opcja4, SIGNAL(clicked()), tablet3Class, SLOT(funkcja4()));
        QObject::connect(opcja5, SIGNAL(clicked()), tablet3Class, SLOT(funkcja5()));
        QObject::connect(opcja2, SIGNAL(clicked()), tablet3Class, SLOT(funkcja2()));
        QObject::connect(opcja3, SIGNAL(clicked()), tablet3Class, SLOT(funkcja3()));
        QObject::connect(opcja6, SIGNAL(clicked()), tablet3Class, SLOT(funkcja6()));

        QMetaObject::connectSlotsByName(tablet3Class);
    } // setupUi

    void retranslateUi(QWidget *tablet3Class)
    {
        tablet3Class->setWindowTitle(QApplication::translate("tablet3Class", "Form", nullptr));
        opcja1->setText(QApplication::translate("tablet3Class", "Dodaj obiekt", nullptr));
        opcja2->setText(QApplication::translate("tablet3Class", "Zapisz", nullptr));
        opcja3->setText(QApplication::translate("tablet3Class", "Wczytaj", nullptr));
        opcja4->setText(QApplication::translate("tablet3Class", "Wyswietl", nullptr));
        opcja5->setText(QApplication::translate("tablet3Class", "Usun", nullptr));
        opcja6->setText(QApplication::translate("tablet3Class", "Edytuj", nullptr));
        label->setText(QApplication::translate("tablet3Class", "1", nullptr));
        label_2->setText(QApplication::translate("tablet3Class", "2", nullptr));
        label_3->setText(QApplication::translate("tablet3Class", "3", nullptr));
        label_4->setText(QApplication::translate("tablet3Class", "4", nullptr));
        label_5->setText(QApplication::translate("tablet3Class", "5", nullptr));
        label_6->setText(QApplication::translate("tablet3Class", "6", nullptr));
        wyjscie->setText(QApplication::translate("tablet3Class", "Wyjscie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tablet3Class: public Ui_tablet3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLET3_H
