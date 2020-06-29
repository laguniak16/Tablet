#pragma once


#include "tablet3.h"
#include <QtWidgets/QMainWindow>
#include "ui_opcja1.h"
#include <qdialog>
#include <tablet.h>
#include <stacjonarne.h>
#include <qvector.h>


class Opcja1 : public QDialog 
{
	Q_OBJECT

public:

	Ui::opcja1 o1;
	Opcja1(QWidget *parent = Q_NULLPTR);

private:
	enum typObiektu { TABLET, PRZENOSNE, STACJONARNE };
	typObiektu obiekt;

public slots:
	
	void dodajtablet();
	void dodaj();
	void dodajprzenosne();
	void dodajstacjonarne();
};