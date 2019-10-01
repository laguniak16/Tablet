#include "cechy tabletu.h"

CechyTabletu::CechyTabletu()
{
#ifdef _DEBUG

	cout << "Wywolano konstruktor Cechy_tabletu"<<endl;
#endif
	glosnosc = 10;
	pojemnosc_pamieci = 2000;
}


CechyTabletu::~CechyTabletu()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor Cechy_tabletu"<< endl;
#endif 
}

void CechyTabletu::ustawglosnosc()
{
	if (glosnosc >= 11)
		glosnosc = 5;
}

string CechyTabletu::wypisz_stan()
{
	return  "Glosnosc: " + to_string(glosnosc) + "Pojemnosc pamieci: " + to_string(pojemnosc_pamieci);
}

void CechyTabletu::doloz_pamieci(int doloz)
{
	pojemnosc_pamieci += doloz;

}

fstream & operator<<(fstream & wyp, CechyTabletu & cechy)
{
	wyp << cechy.glosnosc << cechy.pojemnosc_pamieci;
	return wyp;
	// TODO: insert return statement here
}

fstream & operator>>(fstream & wcz, CechyTabletu & cechy)
{
	wcz >> cechy.glosnosc >> cechy.pojemnosc_pamieci;
	return wcz;
	// TODO: insert return statement here
}
