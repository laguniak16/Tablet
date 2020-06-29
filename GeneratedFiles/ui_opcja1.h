/********************************************************************************
** Form generated from reading UI file 'opcja1.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCJA1_H
#define UI_OPCJA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opcja1
{
public:
    QPushButton *Powrot;
    QPushButton *Tablet;
    QPushButton *Stacjonarne;
    QPushButton *Przenosne;
    QFrame *ramka;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QTextEdit *textEdit_3;
    QLabel *label;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QTextEdit *textEdit_4;
    QPushButton *pushButton;

    void setupUi(QDialog *opcja1)
    {
        if (opcja1->objectName().isEmpty())
            opcja1->setObjectName(QStringLiteral("opcja1"));
        opcja1->resize(412, 180);
        opcja1->setLayoutDirection(Qt::LeftToRight);
        Powrot = new QPushButton(opcja1);
        Powrot->setObjectName(QStringLiteral("Powrot"));
        Powrot->setGeometry(QRect(20, 140, 75, 23));
        Tablet = new QPushButton(opcja1);
        Tablet->setObjectName(QStringLiteral("Tablet"));
        Tablet->setGeometry(QRect(10, 30, 111, 23));
        Stacjonarne = new QPushButton(opcja1);
        Stacjonarne->setObjectName(QStringLiteral("Stacjonarne"));
        Stacjonarne->setGeometry(QRect(10, 60, 111, 23));
        Przenosne = new QPushButton(opcja1);
        Przenosne->setObjectName(QStringLiteral("Przenosne"));
        Przenosne->setGeometry(QRect(10, 90, 111, 23));
        ramka = new QFrame(opcja1);
        ramka->setObjectName(QStringLiteral("ramka"));
        ramka->setEnabled(true);
        ramka->setGeometry(QRect(130, 10, 281, 161));
        ramka->setCursor(QCursor(Qt::WaitCursor));
        ramka->setAutoFillBackground(false);
        ramka->setFrameShape(QFrame::NoFrame);
        ramka->setFrameShadow(QFrame::Plain);
        gridLayoutWidget = new QWidget(ramka);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 281, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_2 = new QTextEdit(gridLayoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 2, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        textEdit_3 = new QTextEdit(gridLayoutWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        gridLayout->addWidget(textEdit_3, 3, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        textEdit_4 = new QTextEdit(gridLayoutWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        gridLayout->addWidget(textEdit_4, 4, 2, 1, 1);

        pushButton = new QPushButton(ramka);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 130, 75, 23));

        retranslateUi(opcja1);
        QObject::connect(Powrot, SIGNAL(clicked()), opcja1, SLOT(close()));
        QObject::connect(Tablet, SIGNAL(clicked()), opcja1, SLOT(dodajtablet()));
        QObject::connect(Stacjonarne, SIGNAL(clicked()), opcja1, SLOT(dodajstacjonarne()));
        QObject::connect(Przenosne, SIGNAL(clicked()), opcja1, SLOT(dodajprzenosne()));
        QObject::connect(pushButton, SIGNAL(clicked()), opcja1, SLOT(dodaj()));

        QMetaObject::connectSlotsByName(opcja1);
    } // setupUi

    void retranslateUi(QDialog *opcja1)
    {
        opcja1->setWindowTitle(QApplication::translate("opcja1", "Dialog", nullptr));
        Powrot->setText(QApplication::translate("opcja1", "Anuluj", nullptr));
        Tablet->setText(QApplication::translate("opcja1", "Dodaj Tablet", nullptr));
        Stacjonarne->setText(QApplication::translate("opcja1", "Dodaj Stacjonarne", nullptr));
        Przenosne->setText(QApplication::translate("opcja1", "Dodaj Przenosne", nullptr));
        label_2->setText(QApplication::translate("opcja1", "Nazwa", nullptr));
        label->setText(QApplication::translate("opcja1", "Numer", nullptr));
        label_3->setText(QApplication::translate("opcja1", "Typ", nullptr));
        label_4->setText(QApplication::translate("opcja1", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("opcja1", "Dodaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opcja1: public Ui_opcja1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCJA1_H
