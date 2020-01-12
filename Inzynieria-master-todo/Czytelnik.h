#ifndef CZYTELNIK_H
#define CZYTELNIK_H
#include <vector>
#include <cstring>
#include <fstream>


using namespace std;
class Ksiazka;
vector<pair <Ksiazka, int> > tab_egzemplarz;


class Czytelnik
{	
	

	public:
		string imie;
		string nazwisko;
		string IDkarty;
		string haslo;
		vector<Ksiazka>ksiazki_czytelnika;
		void wypozycz(string tytul);
	
	

		

		Czytelnik(string k,string h, string i, string n);
		~Czytelnik();
	protected:
};

#endif
