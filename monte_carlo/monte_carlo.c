#include<stdio.h>
#include<stdlib.h>

double f(double x){
return x*x;
}
int main(){
double a,b,c,x,y,wyn;
a=0.0;
b=1.0;
c=3.5;
int n,i,m;
m=0.0;
n=10000;
srand(1);
x,y=0.0;
wyn =0;
for (i=0;i<n;i++){
    x = (double)rand()/RAND_MAX;
    y = (double)rand()/RAND_MAX*3.5;
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
