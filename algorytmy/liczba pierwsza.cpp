
#include <iostream>
#include <stdlib.h>
using namespace std;
 
void szukaj_liczb_pierwszych(int limit);
 
int main()
{  
     
    int limit;
 
    cout << "Podaj zakres do ktorej liczby mam szukac liczb pierwszych (dla 0 nieskonczonosc): ";
    cin >> limit;
     
    szukaj_liczb_pierwszych(limit);
  
    cout << "\n\n";
    system("pause");
    return 0;
}
 
void szukaj_liczb_pierwszych(int limit) {  
    static int liczba = 2;
     
    int podzielnikow = 0;
    for(int i = 1; i <= liczba; i++) {
        if(liczba%i == 0) {
            podzielnikow++;
            if(podzielnikow > 2) {            
                break;
            }
        }
    }
 
    if(podzielnikow == 2)
    {
        cout << "Liczba pierwsza: "<<liczba<<"\n";
    }
     
    liczba++;
 
    if(liczba <= limit || limit == 0) {
        szukaj_liczb_pierwszych(limit);
    }
}
