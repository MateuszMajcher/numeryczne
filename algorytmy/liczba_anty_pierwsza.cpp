//Zadanie 3 Zestaw 8
#include <iostream>
#include <stdlib.h>
using namespace std;

void liczba(int n){
    int k; //liczba k jest liczba anty-pierwsza
    int max = 0;
    int x = 0;
    int ile, j;
    for( k = 1; k <= n; k++)
         {
          ile = 0;
          j = 1;
    while( j <= k)
           {
            if(k % j == 0)
                 ile += 2;
                 j++;
            }
                 if(ile > max)
                        {
                         ++x;
                         max = ile;
                         cout << k << "\t" << endl;
                        }
            }
    cout << endl;
    cout << "Liczb anty-pierwszych jest: " << x << endl;
}


int main()
{
    int n;
    cout << "Podaj gorny zakres zbioru: ";
    cin >> n;
    cout << "\n\n";
    liczba(n);
    cout << endl;
    
    
    
    
    system("pause");
    return 0;
}
