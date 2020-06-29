#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_opcja4.h"
#include <qdialog>
#include "tablet3.h"
#include <string>
#include <QString>
#include <tablet.h>
#include <QGraphicsScene>
#include <qvector.h>

class Opcja4 : public QDialog
{
	Q_OBJECT


public:
	Ui::opcja4 o4;
	Opcja4(QWidget *parent = Q_NULLPTR);
	

private:
	QPixmap zdjecie;
	QGraphicsScene scena;
	int index;
	public slots:
	void wyswietl();
	void wyswietlobraz();
};