//Zadanie 2, zestaw 5.
#include <iostream>
#include <cstdlib>

using namespace std;
int szukaj(int T[], int n, int k, int p)

/*petla for sprawdza czy zmienna k znajduje sie w tablicy, jesli liczba
  znajduje sie to zwroci wartosc 1, jesli liczba jest poza obaszrem tablicy
  to na ekranie zostanie wypisane -1 */
{
    for(int i = p; i < n; i++)
            if(T[i] == k) return 1;
            return -1;
}              

int main()
{
 int * Z,n,i,k;
 
 cout << "Podaj wielkosc tablicy: ";
 cin >> n; // Przypisuje n wielkosc tablicy
 
 Z = new int [n];
 
 cout << endl;
 cout << "Wprowadz kolejno liczby do tablicy." << endl;
 
 for(i = 0; i < n; i++)
 cin >> Z[i]; // Wypelnianie tablicy liczbami
 
 cout << endl;
 
 cout << "Podaj liczbe w celu sprawdzenia czy znajduje sie w tablicy." << endl;
 cin >> k;    /* zmienna k to liczba ktora szukamy w tablicy do ktorej
                 wczesniej wprowadzilismy liczby */
 
 cout << endl << szukaj(Z,n,k,0) << endl << endl;
 delete [] Z;
  
 system("pause");
 return 0;   
}
