#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*iteracja*/
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



do{

x1 = s1;
x2 = s2;
x3 = s3;
s1 = (1-x2+x3)/2.0;
s2 = (2-x1-x3)/3.0;
s3 = (3*x1-x2)/4.0;
/*
s1 = (7-(-1*x2)-(1*x3))/4;
s2 = (-21-(4*x1)-(1*x3))/-8;
s3 = (15-(-2*x1)-(1*x2)/5);
*/


printf("%.6f  %.6f  %.6f\n",s1,s2,s3);

//printf("%f %f %f\n",s1,s2,s3);
} while(fabs(s1 - x1) > d || fabs(s2 - x2) > d || fabs(s3 - x3) > d);

printf("%.6f  %.6f  %.6f\n",s1,s2,s3);
  
return 0;
}
