// Sortowanie przez scalanie (mergesort)
// Koszt algorytmu w ka�dym przypadku:
// T(n)=n log n

#include <iostream>
#include <stdlib.h>

using namespace std;

int tab[30] = {30,29,28,27,26,25,1,2,3,4,5,6,7,24,23,22,21,20,19,18,8,9,10,11,17,16,15,13,14,12};
int t[30];  // Tablica pomocnicza

/* Scalanie dwoch posortowanych ciagow
   tab[pocz...sr] i tab[sr+1...kon] i
   wynik zapisuje w tab[pocz...kon] */

void merge(int pocz, int sr, int kon)
     {
      int i,j,q;
      for (i = pocz; i <= kon; i++) t[i] = tab[i];    // Skopiowanie danych do tablicy pomocniczej
      i = pocz; j = sr + 1; q = pocz;                 // Ustawienie wska�nik�w tablic
        while (i <= sr && j <= kon)                   // Przenoszenie danych z sortowaniem ze zbior�w pomocniczych do tablicy g��wnej
              {		  
                   if(t[i] < t [j])
                   tab[q++] = t[i++];
        else
                   tab[q++] = t[j++];
              }
        while (i <= sr) tab[q++] = t[i++];	// Przeniesienie nie skopiowanych danych ze zbioru pierwszego w przypadku, gdy drugi zbi�r si� sko�czy�
}       

/* Procedura sortowania tab[pocz...kon] */

void mergesort(int pocz, int kon)
     {
      int sr;
      if (pocz < kon)
         {
          sr = (pocz + kon)/2;
          mergesort(pocz, sr);    // Dzielenie lewej cz�ci
          mergesort(sr+1, kon);   // Dzielenie prawej cz�ci
          merge(pocz, sr, kon);   // ��czenie cz�ci lewej i prawej
         }
     }

int main(int i)
{
          cout << "Zbior liczb przed posortowaniem: " << endl;
          for (i=0; i < 30; i++)
              cout << tab[i] << " ";

          mergesort(0,30-1);
          cout << endl << endl;
          cout << "Zbior liczb po sortowaniu: " << endl;
          
          for (i=0; i<30; i++)
          cout << tab[i] << " ";
          cout << endl << endl;
          
   system("pause");
   return 0;
}
