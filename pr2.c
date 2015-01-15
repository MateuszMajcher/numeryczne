#include<stdio.h>
/*gaus*/
int main(){
int i=0;
int n =0;
float x1 =0;
float x2 =0;
float x3 =0;
float s1,s2,s3;
s1=s2=s3=0;

printf("podaj ilosc iteracji\n");
scanf("%d",&n);

for(i = 0;i<n;i++){

x1 = (7-(-1*x2)-(1*x3))/4;
x2 = (-21-(4*x1)-(1*x3))/-8;
x3 = (15-(-2*x1)-(1*x2)/5);
s1 = s1 - x1;
s2 = s2 - x2;
s3 = s3 - x3;
printf("%12.4f %12.4e %12.4f %12.4e %12.4f %12.4e\n",x1,s1,x2,s2,x3,s3);
s1 =x1;
s2 = x2;
s3 =x3;
printf("%f %f %f\n",s1,s2,s3);
} 









return 0;
}
