#include <iostream>

#include <cstdlib>
using namespace std;

int binarne(int poczatek, int koniec, int tab[], int szukany)
{ 
    if (poczatek<=koniec)
  { int srodek=(poczatek+koniec)/2;
    if (tab[srodek]==szukany)
       return srodek;
    if(tab[srodek]>szukany)
      return binarne(poczatek, srodek, tab, szukany);
    else
      return binarne(srodek+1, koniec, tab, szukany);
  }
  return 0;    
       
}               
int main(){

    int tablica[10] = {0, 3, 5, 6, 8, 12, 15, 25, 33, 63};
    cout << "a tablica 20 elementowa." << endl;
         for(int i = 0; i < 10; i++){
                 cout << i << ": " << tablica[i] << endl;
         }
    cout << endl;
    int srodek, x, y, lewy = 0, prawy = 10;
    cout << "Podaj poszukiwany element: "; 
	cin >> y;

cout<<binarne(0,10,tablica,y);
    cout << endl;          
    system("pause");
    return 0;
}
                    
