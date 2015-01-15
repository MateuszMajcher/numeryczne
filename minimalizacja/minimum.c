#include<stdio.h>
#include<stdlib.h>
#define MAX_ITER 1000
double f(double x){
return cos(x);
}
int main(){
int i=0;
float h,x0,x2,x1,f0,f1,f2,c,b,xm,eps;
xm=0.0;
eps=0;
x0,x2,f0,f1,f2=0.0;
h=0.1;
x1=3.08;
do{
x0=x1-h;
x2=x1+h;
f0=f(x0);
f1=f(x1);
f2=f(x2);
c=1.0/(2.0*h*h)*(f0-2.0*f1+f2);
b=1.0/(2.0*h*h)*((-f0*(2*x1+h)+4.0*f1*x1-f2*(2*x1-h)));
xm=-b/(2*c);
x1=xm;
printf("%f   %f    %f    %f\n",c,b,x0,x1);
i++;
}while(fabs(xm-x1)>=eps && i < MAX_ITER);
if (i >= MAX_ITER) printf("przekroczonoa maks ilosc iteracji");
else               printf("%f   %f    %f   rozwiazanie to %f\n",c,b,x0,x1);


return 0;
}
