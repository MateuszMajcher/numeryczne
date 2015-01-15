#include<stdio.h>
#include<math.h>
/*etoda Eulera*/
main()
{
   float h,x,sum,yx;
   float i; 
   h=0.1;
   yx=1.0;
   sum =1.0;
   
   printf("x         y         y(x)\n");
   for(i =0.1;i<=1;i+=0.1){
   sum = sum-h*pow(-sum,2);
   yx=1.0/(1.0+i);  
   
   printf("%f  %f  %f\n",i,sum,yx);
   }
}
