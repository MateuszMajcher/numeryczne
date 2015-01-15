//Zadanie 4, zestaw 7
//wersja dziel i zwyciezaj
#include <iostream>
#include <cstdio>
#include <stdlib.h>
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

int dwumian_newtona(int n, int k)
      {
       if( k == 0 || n == k)
          {
           return 1;
          }
       else 
          {
//           silnia(n)/(silnia(k)*silnia(n-k));
           return dwumian_newtona(n-1, k-1) + dwumian_newtona(n-1, k);
          }
      }


int main()
{
    int n, k;
    cout << "Podaj dwie liczby n i k aby policzyc dwumian newtona."
         << endl << endl;
    cout << "Podaj n: "; cin >> n;
    cout << "Podaj k: "; cin >> k; 
    cout << endl;
    
    cout << "Dwumian newtona wynosi: " << dwumian_newtona(n,k) << endl;

    
    
    
    
    
    cout << endl;
    system("pause");
    return 0;
}

