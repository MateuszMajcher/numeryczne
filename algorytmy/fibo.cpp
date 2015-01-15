#include <iostream>
#include <cstdlib>

using namespace std;

unsigned int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;

    cout << "Podaj numer wyrazu :" << endl;
    cin >> n;

    cout << fib(n) << endl;

    system("PAUSE");
    return(0);
}
