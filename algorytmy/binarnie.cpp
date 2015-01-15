//Zadanie 1, zestaw nr. 6
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;



void dwa(int liczba)
         {
               if(liczba)
                         {
                          dwa(liczba / 2);
                          cout << "" << liczba%2;
                         }
         }
int main()

{
    int liczba;
    cout << "Podaj liczbe dziesietna: ";
    cout << endl;

    cin >> liczba;
    cout << "Binarnie: ";
    dwa(liczba);

    cout << endl
         << endl;    
     
    system("pause");
    return 0;

}
