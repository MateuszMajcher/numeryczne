#include<stdio.h>	
#include<math.h>
#define h_p 0.01
double fun(double x){
	return x*x-5;
}

double fund(double x){
	return  (1/2.0/h_p)*(fun(x+h_p)-fun(x-h_p));  //po fun
}



int main(){
 int itr, maxmitr;
    float h, x0, x1, allerr;

	
	printf("Podaj x0\n");
	scanf("%f",&x0);
	
	itr =0;
     do {
        itr++;
        h=fun(x0)/fund(x0);
        x1=x0-h;
       x0=x1; 
       printf(" Iteracja %3d, x = %9.16f  h= %f   x1 = %f\n", itr, x1,fabs(h),x1);
        } while(fabs(h) > 1e-8  && itr < 1000);
 
       printf("znaleziono = %8.6f\n",  fund(x0));
	
	return 0;
}
