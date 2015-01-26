#include<stdio.h>
#include<stdlib.h>

double f(double x){
return x*x;
}

int main(){
double a,b,c,x,y,wyn;
int n,i,m;
m=0.0;
n=10000;
srand(1);
x,y=0.0;
wyn =0;
printf("Podaj a \n");
scanf("%lf",&a);
printf("Podaj b \n");
scanf("%lf",&b);
printf("Podaj c \n");
scanf("%lf",&c);
for (i=0;i<n;i++){
    x = (double)rand()/RAND_MAX*b;
    y = (double)rand()/RAND_MAX*c;
    if (y<=f(x)){m++;}
     //printf( "max %d\n",m);
}
wyn = (m/(double)n)*((b-a)*c);
printf( "m %f\n", wyn);


/*for( i = 0; i < 10; i++ )
         printf( "Wylosowano %f\n", (double)rand()/RAND_MAX );
         printf( "max %d\n", RAND_MAX);*/
return 0;
}
