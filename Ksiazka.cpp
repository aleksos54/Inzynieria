#include "stdafx.h"
#include "Ksiazka.h"
#include <iostream>
using namespace std;


Ksiazka::Ksiazka(string t) :Autor(a, b);
{
	this->tytul = t;
	this->imie = a;
	this->nazwisko = b;
	cout << "tworze ksiazke" << endl;
}


Ksiazka::~Ksiazka()
{
	cout << "usuwam ksiazke";
}
