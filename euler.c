#include<stdio.h>
#include<math.h>
int main(){
int x,n;
double y,h,wynik,roznica;
n=20;
h=0.01;
y=1.0;
x=0;
wynik =0.0;
roznica =0.0;
for(x=0;x<n;x++){
wynik = pow(M_E,-x);
y = (1.0-h)*y;
roznica = wynik - y;
printf("wynik: to %f y: to %f roznica: to %f\n",wynik,y,roznica);
}
return 0;
}
