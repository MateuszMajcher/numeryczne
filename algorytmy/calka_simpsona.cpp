#include <iomanip>
#include <iostream> 
#include <stdlib.h>
using namespace std;
//*******************************
//** Tutaj definiujemy funkcjê **
//*******************************
double f(double x)
{
  return(x * x + 2 * x);
}
//********************
//** Program g³ówny **
//********************
 
int main()
{
  const int N = 10; //liczba punktów podzia³owych
  double xp,xk,s,st,dx,x;
  int i;
 
  cout.precision(3);      // 3 cyfry po przecinku
  cout.setf(ios::fixed);  // format sta³oprzecinkowy
 
  cout << "Obliczanie calki oznaczonej\n"
          " za pomoca metody Simpsona\n"
          "---------------------------\n"
          "Podaj poczatek przedzialu calkowania\n\n"
          "xp = ";
  cin >> xp;
  cout << "\nPodaj koniec przedzialu calkowania\n\n"
          "xk = ";
  cin >> xk;
  cout << endl;
  s  = 0; st = 0;
  dx = (xk - xp) / N;
  for(i = 1; i <= N; i++)
  {
    x = xp + i * dx;
    st += f(x - dx / 2);
    if(i < N) s += f(x);
  };
  s = dx / 6 * (f(xp) + f(xk) + 2 * s + 4 * st);
  cout << "Wartosc calki wynosi : " << setw(8) << s
       << "\n\n";
  system("PAUSE"); return 0;
}
