#include <iostream>
#include "KartaCzytelnika.h"
#include "Czytelnik.h"
#include "Autor.h"
#include "Ksiazka.h"
#include <vector>
#include <algorithm>
#include <fstream>


using namespace std;


void rejestruj();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Autor a1("Adam","Mickiewicz");
	Autor a2("Juliusz","Slowacki");
	Autor a3("Chris","Brown");
	Ksiazka k1("DZiady");
	Ksiazka k2("Pan Tadeusz");
	Ksiazka k3("Wallenrod");
	Ksiazka k4("cyce");
	a1.przypisz_ksiazke(k1);
	a1.przypisz_ksiazke(k2);
	a1.przypisz_ksiazke(k3);
	a1.przypisz_ksiazke(k4);
	a1.wypisz_ksiazke_danego_autora();
	a1.usun_ksiazke(k2);
	a1.wypisz_ksiazke_danego_autora();
	cout<<endl;
	cout<<endl;
	k4.przypisz_autora(a1);
	k4.przypisz_autora(a2);
	k4.przypisz_autora(a3);
	k4.wypisz_autorow_ksiazki();
	k4.usun_autora(a3);
	k4.wypisz_autorow_ksiazki();
	
	
	/*
	Czytelnik c1(1,"kamil", "kamil");
	rejestruj();
	return 0;
}
void rejestruj()
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
	*/
}

