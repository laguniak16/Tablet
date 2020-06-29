/********************************************************************************
** Form generated from reading UI file 'opcja4.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCJA4_H
#define UI_OPCJA4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_opcja4
{
public:
    QListWidget *lista;
    QGraphicsView *obrazek;

    void setupUi(QDialog *opcja4)
    {
        if (opcja4->objectName().isEmpty())
            opcja4->setObjectName(QStringLiteral("opcja4"));
        opcja4->resize(520, 195);
        lista = new QListWidget(opcja4);
        lista->setObjectName(QStringLiteral("lista"));
        lista->setGeometry(QRect(0, 0, 301, 192));
        obrazek = new QGraphicsView(opcja4);
        obrazek->setObjectName(QStringLiteral("obrazek"));
        obrazek->setGeometry(QRect(310, 0, 211, 191));

        retranslateUi(opcja4);
        QObject::connect(lista, SIGNAL(clicked(QModelIndex)), opcja4, SLOT(wyswietlobraz()));

        QMetaObject::connectSlotsByName(opcja4);
    } // setupUi

    void retranslateUi(QDialog *opcja4)
    {
        opcja4->setWindowTitle(QApplication::translate("opcja4", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opcja4: public Ui_opcja4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCJA4_H
