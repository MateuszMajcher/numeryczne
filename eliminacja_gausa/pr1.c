/*eliminacja gausa*/

#include<stdio.h>

int main(){
float A[10][10];

float x[10],wart,c;
int i,j,n,k;

printf("podaj wielkosc macierzy");
scanf("%d",&n);

/*wczyt*/
for (i=1;i<=n;i++){
   for (j=1;j<=n+1;j++){
     printf("A[%d][%d]: ",i,j);
     scanf("%f",&A[i][j]);
   }
}

for(i=2;i<=n;i++)
{
   for(j=i;j<=n;j++)
    {
      c=A[j][i-1]/A[i-1][i-1];
      for(k=i-1;k<=n+1;k++){
         A[j][k]=A[j][k]-c*A[i-1][k];
      }
    }
}


/*eliminacja*/
x[n] =  A[n][n+1]/A[n][n];
for (i=n-1;i>=1;i--){
 wart =0;
  for(j=i+1;j<=n;j++){
    wart = wart + A[i][j]*x[j];
  }
  x[i] = (A[i][n+1] - wart)/A[i][i];
}


/*wysw*/
for (i=1;i<=n;i++){
   printf("x[%d] : %f",i,x[i]);
}

return 0;
}
