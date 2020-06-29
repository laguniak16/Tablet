/********************************************************************************
** Form generated from reading UI file 'opcja6.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCJA6_H
#define UI_OPCJA6_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opcja6
{
public:
    QListWidget *obiekty;
    QPushButton *pushButton;
    QFrame *ramka;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit_3;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_4;
    QLabel *label;

    void setupUi(QDialog *opcja6)
    {
        if (opcja6->objectName().isEmpty())
            opcja6->setObjectName(QStringLiteral("opcja6"));
        opcja6->resize(545, 167);
        obiekty = new QListWidget(opcja6);
        obiekty->setObjectName(QStringLiteral("obiekty"));
        obiekty->setGeometry(QRect(0, 20, 271, 141));
        pushButton = new QPushButton(opcja6);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 80, 75, 23));
        ramka = new QFrame(opcja6);
        ramka->setObjectName(QStringLiteral("ramka"));
        ramka->setGeometry(QRect(270, 20, 201, 141));
        ramka->setFrameShape(QFrame::StyledPanel);
        ramka->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(ramka);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 201, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_3 = new QTextEdit(gridLayoutWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        gridLayout->addWidget(textEdit_3, 3, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        textEdit_2 = new QTextEdit(gridLayoutWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 2, 1, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 1, 1, 1);

        textEdit_4 = new QTextEdit(gridLayoutWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));

        gridLayout->addWidget(textEdit_4, 4, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);


        retranslateUi(opcja6);
        QObject::connect(pushButton, SIGNAL(clicked()), opcja6, SLOT(edytuj()));
        QObject::connect(obiekty, SIGNAL(clicked(QModelIndex)), opcja6, SLOT(doedycji()));

        QMetaObject::connectSlotsByName(opcja6);
    } // setupUi

    void retranslateUi(QDialog *opcja6)
    {
        opcja6->setWindowTitle(QApplication::translate("opcja6", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("opcja6", "Edytuj", nullptr));
        label_3->setText(QApplication::translate("opcja6", "Numer", nullptr));
        label_2->setText(QApplication::translate("opcja6", "Nazwa", nullptr));
        label_4->setText(QApplication::translate("opcja6", "TextLabel", nullptr));
        label->setText(QApplication::translate("opcja6", "Typ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opcja6: public Ui_opcja6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCJA6_H
