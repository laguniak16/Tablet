/********************************************************************************
** Form generated from reading UI file 'opcja5.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCJA5_H
#define UI_OPCJA5_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_opcja5
{
public:
    QComboBox *box;
    QPushButton *PushButton;

    void setupUi(QDialog *opcja5)
    {
        if (opcja5->objectName().isEmpty())
            opcja5->setObjectName(QStringLiteral("opcja5"));
        opcja5->resize(461, 73);
        box = new QComboBox(opcja5);
        box->setObjectName(QStringLiteral("box"));
        box->setGeometry(QRect(0, 0, 461, 41));
        PushButton = new QPushButton(opcja5);
        PushButton->setObjectName(QStringLiteral("PushButton"));
        PushButton->setGeometry(QRect(184, 40, 91, 23));

        retranslateUi(opcja5);
        QObject::connect(box, SIGNAL(currentIndexChanged(int)), opcja5, SLOT(dousuniecia()));
        QObject::connect(PushButton, SIGNAL(clicked()), opcja5, SLOT(usun()));

        QMetaObject::connectSlotsByName(opcja5);
    } // setupUi

    void retranslateUi(QDialog *opcja5)
    {
        opcja5->setWindowTitle(QApplication::translate("opcja5", "Dialog", nullptr));
        PushButton->setText(QApplication::translate("opcja5", "Usun", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opcja5: public Ui_opcja5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCJA5_H
