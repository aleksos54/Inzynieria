#pragma once
#include "Autor.h"
#include <iostream>
using namespace std;

class Ksiazka:public Autor{
public:
	string tytul;
	void usun_egzemplarz();
	Ksiazka zwroc_wolny_egzemplarz();
	Ksiazka(string t) :Autor(a, b) ;
	~Ksiazka();
};

