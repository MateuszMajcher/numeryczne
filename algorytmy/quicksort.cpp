#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void quicksort(int tablica[10], int x, int y)
     {
      int i, j, v, temp;
      i = x;
      j = y;
      v = tablica[div(x+y,2).quot]; //div.quot wyciaganie wyników, div.rem wyciaga reszte
        do
          {
           while (tablica[i] < v ) i++;
           while (v < tablica[j]) j--;
                 if (i <= j)
   	                {
                     temp = tablica[i];
                     tablica[i] = tablica[j];
                     tablica[j] = temp;
                     i++;
                     j--;
                     }
           }
           
           while (i <= j);
            if (x < j) quicksort(tablica, x, j);
            if (i < y) quicksort(tablica, i, y);
     }
     
int main()

{
     int ile_liczb, i, liczba;
     int tablica[10];


     cout << "Podaj ile liczb chcesz posortowac, maksymalnie mozesz posortowac 10 liczb: ";
     cin >> ile_liczb;

     for(i = 0; i < ile_liczb; i++)
              {
               cout << "Wprowadz liczbe" << "(" << i << "):" << " "; cin >> liczba;
               tablica[i] = liczba;
              }
               
     cout << endl;
     cout << "Tablica ktora zostala wprowadzona, przez uzytkownika. Przed posortowaniem." << endl;
     
     for(i = 0; i < ile_liczb; i++)
              {
               cout << "Liczba" << "(" << i << "):" << " " << tablica[i] << endl;
              }
     
     quicksort(tablica , 0, ile_liczb - 1);
     cout << endl;
     cout << "Tablica po sortowaniu: " << endl;
     
     for(i = 0; i < ile_liczb; i++)
              {
               cout << "Liczba" << "(" << i << "):" << " " << tablica[i] << endl;
              }
              
     cout << endl;        
system("pause");
return 0;
}
