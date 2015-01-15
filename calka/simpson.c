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

dx = (b - a)/n;
for(i = 1;i<=n;i++){
x = a+i*dx;
st += f(x-(dx/2));
if(i<n) s+=f(x);
printf("i-%d x to %f  st to %f\n",i,x,st);
}


s = (dx/6)*(f(a) + f(b) + 2*s + 4 * st);
printf("rozwiazanie to %f\n",s);



return 0;
}
