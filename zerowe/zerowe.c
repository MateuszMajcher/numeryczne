#include<stdio.h>
#include<math.h>


 
 float fun (float x)
 {
   return 3*(x-3)*(x+2);
 }
int main(){
float a,b,eps,fun1,fun2,x0,fun0;
eps=0.00001;

printf("podaj a \n");
scanf("%f",&a);

printf("podaj b \n");
scanf("%f",&b);

 if (fun(a)*fun(b) >= 0)
  {
    printf("Niewłaściwe dane wejściowe!\n");
    
  } else {

  while (b-a > eps){
    x0 = (a+b)/2;
      if (f(a)*f(c)<0)
    
      b = c;
    else
     
      a = c;
    cout << "x = " << c << " +/- " << (b-a)/2 << endl;

  }




}
return 0;
}


