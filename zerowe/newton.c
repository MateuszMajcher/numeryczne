#include<stdio.h>
#include<math.h>



int main(){
float X[10] = {1,2,3,4};
float Y[10] = {1,3,7,2};
float x0;
int i=0;
float yx =0;

printf("podaj a n");
    scanf("%f",&x0);


    i=0;
    while(x0 < X[i++]);
       
    yx = Y[i] + ((Y[i+1]-Y[i])/(X[i+1]-X[i]))*(x0 - X[i]);
    printf("%f %f\n",X[i],Y[i]);
    printf("%f",yx);
return 0;
}
