#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_opcja6.h"
#include <qdialog>
#include "tablet3.h"

class Opcja6 : public QDialog
{
	Q_OBJECT

public:
	Ui::opcja6 o6;
	Opcja6(QWidget *parent = Q_NULLPTR);
private:
	int index;
	public slots:
	void doedycji();
	void edytuj();
	void wyswietl();
};