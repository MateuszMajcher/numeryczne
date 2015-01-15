#include<stdio.h>
#include<math.h>

int main(){
 int i;
 float x,a;
i=0;
do {
 x=a;
 a=cos(x);

 printf("X - %f\n",x);
}while(fabs(a-x) > 1.e-5);

return 0;
}
