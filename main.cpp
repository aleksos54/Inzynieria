#include <iostream>
#include "KartaCzytelnika.h"
#include "Czytelnik.h"

using namespace std;

int loguj();
void rejestruj();
void wypisz(string a, string b );
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
start:
	cout<<"---Witaj w systemie bibliotecznym---"<<endl;
	cout<<" 1. Zarejestruj sie "<<endl;
	cout<<" 2. Zaloguj sie "<<endl;
	int wybor;
	cin>>wybor;
	
	switch(wybor)
	{
		case 1:
			rejestruj();
			cout<<endl;
			goto start;
			break;
		case 2:
			loguj();
			goto inter1;
			break;
		case 0:
			//admin();
			goto interad;
			break;
	}
	
inter1:
	
	cout<<"---Panel czytelnika---"<<endl;
	cout<<" 1. Wyszukaj ksiazke "<<endl;
	cout<<" 2. Wypozycz ksiazke "<<endl;
	cout<<" 3. Zarezerwuj ksiazke "<<endl;
	//cout<<" 3. Oddaj ksiazke "<<endl;
	
	int wybor1;
	cin>>wybor1;
	
	switch(wybor1)
	{
		case 1:
			//wyszukaj();
			cout<<"elo";
			cout<<endl;
			break;
		case 2:
				cout<<"elo2";
			//wypozycz();
			break;
		case 0:
			//admin();
			break;
	}
	
interad:
	cout<<"---Panel bibliotekarza---"<<endl;
	cout<<" 1. Dodaj ksiazke "<<endl;
	cout<<" 2. ";
	
	koniec:
		
	
	Czytelnik c1(1,"kamil", "kamil");
	return 0;
}
void rejestruj()
{
	fstream dane;
	string imie;
    string nazwisko;
    string haslo;
	string IDKarty;

	cout<<"Podaj imie:";		cin>>imie;	
	cout<<"Podaj nazwisko:";	cin>>nazwisko;	
	cout<<"Podaj IDKarty:";		cin>>IDKarty;
	cout<<"Podaj haslo";		cin>>haslo;
	dane.open("data.txt", ios::app);
   //	dane.open("dane.txt",ios::out | ios::app);


		
	dane<<imie<<" ";
		
	dane<<nazwisko<<" ";
			
	dane<<IDKarty<<" ";
	
	dane<<haslo<<" \n";
	
	dane.close();
}

int loguj()
 {
	fstream plik;
	string line1;
	string line2;
	string line3;
	string line4;
	string IDKarty1;
	string haslo;
	cout<<"Podaj login ";	cin>>IDKarty1;
	cout<<"Podaj haslo ";	cin>>haslo;
	cout<<endl;
	plik.open("data.txt", ios::in | ios::out);
	if (plik.good()==true)
	{
		while(!plik.eof())
		{
			plik>>line1;
			plik>>line2;
			plik>>line3;
			plik>>line4;
		if(IDKarty1==line3 && haslo==line4){

			//cout<<"witaj "<< line1 <<" "<< line2<<endl;
			wypisz(line1, line2);
			return 1;
			//goto a;
		}
		else{
		
		//cout<<"blad";
		
		
			}
		}
		//a:
	plik.close();
	cout<<"nie ma takiego id lub hasla"<<endl<<endl;
	return 1;
	}
}

void wypisz(string a, string b ){
	cout<<"Witaj "<<a<<" "<<b<<endl<<endl;
}




