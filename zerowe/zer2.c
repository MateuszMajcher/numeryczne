#include<stdio.h>
#include<math.h>




float fun (float x)
{
    return pow(x,3.0) + (3 * x) -5;
}
int main(){
    float a,b,eps,fa,fb,x0,f0;
    eps=0.001;
    int i = 10;

    printf("podaj a n");
    scanf("%f",&a);

    printf("podaj b n");
    scanf("%f",&b);

    fa = fun(a);
    fb = fun(b);



    while(fabs(a - b) > eps)
    {
      x0 = (a + b) / 2.0; f0 = fun(x0);
      if(fabs(f0) < eps){ break;} //znaleziono rozw wyjscie z petli
      else if(fa * f0 < 0) b = x0;
      else
      {
        a = x0; fa = f0;
      }
      printf("a - %f | b - %f | x0 - %f | fa - %f | fb - %f | f0 - %f\n",a,b,x0,fa,fb,f0);
    }

printf("raozw to %f\n",x0);






        return 0;
    }
