#include<stdio.h>  /*Metoda homera simpsona*/
#include<math.h>

double f(double x){
 return pow(M_E, x);
}  /*(e^5) - e^0*/

int main(){
const int n = 1000; //ilosc prostokatow podziałowych
int i;
double suma,dx,s,st,a,b,x;
a = 0.0;
b = 5.0;
suma,s,x,st = 0.0;
i=1;
suma = f(a) + f(b);
dx = (b - a)/n;
printf("dx  to %f\n",dx);
for(x=a+dx;x<b;x+=2*dx){
suma += 4*f(x)+2*f(x+dx);
printf(" krok  to %f  a to %f b to %f\n",suma,x,b);
}


s = (dx/6)*(f(a) + f(b) + 2*s + 4 * st);
printf("rozwiazanie to %f\n",suma/3*dx);



return 0;
}
