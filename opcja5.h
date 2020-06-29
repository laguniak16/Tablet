#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_opcja5.h"
#include <qdialog>
#include "tablet3.h"

class Opcja5 : public QDialog
{
	Q_OBJECT


public:
	Ui::opcja5 o5;
	Opcja5(QWidget *parent = Q_NULLPTR);
private:
	int indeks;
	public slots:
	void wyswietl();
	void dousuniecia();
	void usun();
};