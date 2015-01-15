
#include <iostream>
#include <cstdlib>

using namespace std;
double silnia(double n)

{
    if( n == 1)
        {        
         return 1;
        }
    else
        {     
         return n * silnia(n-1);
        }
}

int main()
{
  
   double a,e,w,i,n;
    cout << "Podaj liczbe: z";
    cin >> n; 
    cout << "Silnia wynosi: " << silnia(n) << endl << endl;
     cout << "Podaj liczbe E ";
	  cin >>e;
   i=1;
   w=1;
    silnia(1.0);
  
while((1/silnia(i)) > e )
{
   w=w+(1/silnia(i));
   i++;
}
  cout << "Liczba E wynosi: " << w << endl << endl;            
  
int x; 
    int y; 
    w=0;
    cout << "Podaj pierwszy element ciag: "; 
    cin >> x; 
    cout << "Podaj drugi: "; 
    cin >> y; 
    w=(silnia(x)/(silnia(y)*silnia(x-y)));
    cout << w; 
    
    
                   
             
  
             
                
    system("pause");
    return 0;
}
