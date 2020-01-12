#include "Czytelnik.h"
#include<iostream>
#include <fstream>
#include <cstring>

using namespace std;

Czytelnik::Czytelnik(string karta , string h, string i, string n):IDkarty(karta), haslo(h) ,imie(i), nazwisko(n)
{
}

void::Czytelnik::wypozycz(string tytul){
	for(int i=0; i<tab_egzemplarz.size();i++){
		if(tytul==tab_egzemplarz[i].first.tytul && tab_egzemplarz[i].second>0){
			ksiazki_czytelnika.push_back(tab_egzemplarz[i].first);
			tab_egzemplarz[i].second--;
			
		}
		cout<<"wypozyczona";
	}
	
	
	
}
	
	
	
Czytelnik::~Czytelnik()
{
}


