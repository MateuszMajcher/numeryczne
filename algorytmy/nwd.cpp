#include <iostream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

void nwd()
     {
          int a,b,c;
          cout << "Podaj 1 liczbe : ";
               cin >> a;

          cout << "Podaj 2 liczbe : ";
               cin >> b;

          while (b!=0)
                {
                 c = a % b;
                 a = b;
                 b = c;
                }

                cout << "NWD : " << a << "\n";
      }
int main()
{
    nwd();    
    system("pause");
    return 0;   
}
