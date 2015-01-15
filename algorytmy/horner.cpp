#include <iostream>

using namespace std;

float horner (int n, float wsp[20], float x);
int n, ;
float x, a[20], i;
int main()
{
    cout<<"Podaj stopien  wielomianu:";
    cin>>n;
    cout<<"Podaj x";
    cin>>x;
    cout<<"wprowadz wspolczynniki wielonianu;";
    for (int i = 0; i<n;i++)
    cin>> a[i];
    cout<<"Wartosc wielomianu wynosi:"<<horner(n,a,x)<<"\n";
    system("pause");
}
float horner(int n, float wsp[20], float x)
{
    if (n==0)
       return wsp[0];
    else
       return horner(n-1, wsp, x)* x + wsp[n]; 
}
