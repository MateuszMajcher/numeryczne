//Zadanie 4, zestaw 7
//wersja przez silnie
#include <iostream>
#include <cstdio>
#include <stdlib.h >
using namespace std;

int silnia(int n)
     {
      if( n ==0 || n == 1)  
          {
           return 1;
          }
      else
          {
           return n*silnia(n-1);
          }
     }
int main()
{
    int n, k;
    //Liczenie silni
    //cout << "Podaj liczbe aby wyliczyæ silnie: "; cin >> n;
    //cout << "Silnia wynosi: " << silnia(n) << endl;
    
    cout << "Podaj dwie liczby n i k aby policzyæ dwumian newtona.";
    cout << "Dn = n!/n!*(n-k)!" << endl; 
    cout << "Podaj n: "; cin >> n;
    cout << "Podaj k: "; cin >> k;
         if( k == 0 || k == n)
             {
              cout << "Dwumian newtona wynosi: 1" << endl;
             }
         else
             {   
              cout << "Dwumian newtona wynosi: " << silnia(n)/(silnia(k)*silnia(n-k)) << endl;
             }
             
    cout << endl;
    system("pause");
    return 0;
}
