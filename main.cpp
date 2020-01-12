#include <iostream>
#include "KartaCzytelnika.h"
#include "Czytelnik.h"

using namespace std;


void rejestruj();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
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
}

