#include "Czytelnik.h"
#include "KartaCzytelnika.h"
#include<iostream>
#include <fstream>
#include <cstring>

using namespace std;

Czytelnik::Czytelnik(int karta ,string i, string n):KartaCzytelnika(karta), imie(i), nazwisko(n)
{
}

Czytelnik::~Czytelnik()
{
}

void Czytelnik::rejestruj()
{
	fstream dane;
	string imie;
    string nazwisko;
	int IDKarty;

	cout<<"Podaj imie:";		
	cin>>imie;	
	cout<<"Podaj nazwisko:";	cin>>nazwisko;	
	cout<<"Podaj IDKarty:";		cin>>IDKarty;
	dane.open("data.txt", ios::out | ios::app);
   //	dane.open("dane.txt",ios::out | ios::app);


		
	dane<<imie<<" ";
		
	dane<<nazwisko<<" ";
			
	dane<<IDKarty<<" ";
	
	dane.close();
}

