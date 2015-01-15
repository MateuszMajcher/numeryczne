#include<stdio.h>  /*Metoda kwadratow*/
#include<math.h>
double f(double x){
 return pow(M_E, x);
}  /*(e^5) - e^0*/

int main(){
const int n = 1000; //ilosc prostokatow podziałowych
int i;
double suma,dx,s,a,b,x;
a = 0.0;
b = 5.0;
suma,s,x = 0.0;
i=1;

/*calkowanie*/
dx = (b - a)/n;/*
for (i = 1;i <= n;i++)
s += f(a+i*dx);*/
for (x=a+dx/2.0;x<=b;x+=dx)
s += f(x);
/*end*/

printf("rozwiazanie to %f\n",s * dx);

return 0;
}
