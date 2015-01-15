#include <stdio.h>

int main(){
int n,k;
float c;
int i,j;
float A[10][10],x[10],sum=0.0;
printf("podaj wielkosc macierzy");
scanf("%d",&n);

for (i=1;i<=n;i++){

  for (j=1;j<=n+1;j++){
     printf("podaj element tab[%d][%d]",i,j);
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




printf("po eliminacji :- \n");
for(i=1;i<=n;i++){
   for(j=1;j<=n+1;j++){
         printf("\t%.2f",A[i][j]);}
printf("\n");
}



    

return 0;
}
