#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_tablet3.h"
#include <vector>
#include <urzadzenie_elektroniczne.h>
#include "opcja1.h"
#include "opcja4.h"
#include "opcja5.h"
#include "opcja6.h"
#include "tablet.h"
#include "qvector.h"
#include <QTextStream>
#include <deque>
#include <QFile>
#include <string>
#include <QMessageBox>
#include <QFileDialog>
#include <QInputDialog>


using namespace std;

class tablet3 : public QMainWindow
{
	Q_OBJECT

public:

	tablet3(QWidget *parent = Q_NULLPTR);


	static vector<Urzadzenie_elektroniczne*> urzadzenie;
	static vector<string> rodzaj_urzadzenia;
private:
	string nazwa;
	Ui::tablet3Class ui;
	
public slots:
	void funkcja1();
	void funkcja2();
	void funkcja3();
	void funkcja4();
	void funkcja5();
	void funkcja6();




};