#include<stdio.h>
#include<stdlib.h>
/*gaus*/
int main(){
int i=0;
int n =0;
float x1 =0;
float x2 =0;
float x3 =0;
float d =0;
float s1,s2,s3;
s1=s2=s3=0;
float r1,r2,r3;
r1=r2=r3=0;

printf("podaj dokladnosc\n");
scanf("%d",&d);

x1 = (7-(-1*x2)-(1*x3))/4;
x2 = (-21-(4*x1)-(1*x3))/-8;
x3 = (15-(-2*x1)-(1*x2)/5);

do{
s1 = (7-(-1*x2)-(1*x3))/4;
s2 = (-21-(4*x1)-(1*x3))/-8;
s3 = (15-(-2*x1)-(1*x2)/5);

r1 = x1 - s1;
r2 = x2 - s2;
r3 = x3 - s3;

printf("x1 :%12.4f  %12.4e x2: %12.4f %12.4e x3: %12.4f %12.4e\n",x1,s1,x2,s2,x3,s3);

x1 = s1;
x2 = s2;
x3 = s3;

//printf("%f %f %f\n",s1,s2,s3);
} while(d > abs(r1));
  
return 0;
}
