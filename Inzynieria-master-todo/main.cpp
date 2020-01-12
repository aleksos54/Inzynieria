#include <iostream>
#include "KartaCzytelnika.h"
#include "Czytelnik.h"
#include "Autor.h"
#include "Ksiazka.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include<bits/stdc++.h>



using namespace std;

int loguj();
void rejestruj();
void wypisz(string a, string b );

vector<pair <Ksiazka, int> > tab_egzemplarz;
Czytelnik *c2= 0;
string tytul;

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
		
			Czytelnik c1(line4, line3, line1, line2);
			
			c2=&c1;



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

	return 2;

	}

}




int main() {
	
	Autor a1("Adam", "Mickiewicz");
	
	Ksiazka k1("Dziady");
	k1.przypisz_autora(a1);
	Ksiazka k2("Pan Tadeusz");
	Ksiazka k3("Konrad Wallendrod");
	Ksiazka k4("Kordian");
	Ksiazka k5("Przedwiosnie");
	Ksiazka k6("Lalka");
	Ksiazka arr[] = {k1,k2,k3,k4,k5,k6};
	int arr1[] = {1,6,2,8,4,9};
	int n = sizeof(arr)/sizeof(arr[0]); 
	for (int i=0; i<n; i++) 
        tab_egzemplarz.push_back( make_pair(arr[i],arr1[i]) ); 
  
	tab_egzemplarz[0].first.wypisz_autorow_ksiazki(); 
	
	 for (int i=0; i<n; i++) 
    { 
    
        cout << tab_egzemplarz[i].first.tytul << " "
             << tab_egzemplarz[i].second << endl; 
  
    } 
	

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

			// loguj();
			if(loguj()==1)
			goto inter1;
			else
			goto start;

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
			goto koniec;
			cout<<endl;

			break;

		case 2:

				cout<<"Podaj tytul:"<<endl;
				cin>>tytul;
				c2->wypozycz(tytul);
			

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

		

	

	//Czytelnik c1("123","123","kamil", "kamil");

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






void wypisz(string a, string b ){

	cout<<"Witaj "<<a<<" "<<b<<endl<<endl;

}
