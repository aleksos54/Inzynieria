#ifndef CZYTELNIK_H
#define CZYTELNIK_H
#include <vector>
#include <cstring>
#include <fstream>
#include "KartaCzytelnika.h"

using namespace std;

class Czytelnik : public KartaCzytelnika
{	
	

	public:
		string imie;
		string nazwisko;

		
		void rejestruj();
		void usunKarte();

		Czytelnik(int k, string i, string n);
		~Czytelnik();
	protected:
};

#endif
