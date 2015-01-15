/*Meteda iteracji prostej (Jacobiego)*/
#include<stdio.h>
#include<stdlib.h>

float** array2d(int x, int y){
float** Array;
int i;

Array = (float**) malloc(x * sizeof(float*));
for (i =0;i < x;i++)
  Array[i] = (float*) malloc(y * sizeof(float));

return Array;
}


int main(){
int n;
float* x;
float* b;
float* k;

int i,j;
printf("podaj wilekosc macierzy\n");
scanf("%d",&n);
float** A = array2d(n+1,n+1);
float** l = array2d(n+1,n+1);
x = (float*) malloc((n+1) * sizeof(*x));
b = (float*) malloc((n+1) * sizeof(*b));
k = (float*) malloc((n+1) * sizeof(*k));

for (i =0;i<n;i++){
   for(j = 0;j<n;j++){
    printf("A[%d][%d] = ",i+1,j+1);
    scanf("%f",&A[i][j]);
   }
}

for (i = 0;i<n;i++){
printf("b[%d] = ",i+1);
scanf("%f",&b[i]);
}




/*D^-1*/
for (i=0; i<n; i++)
{
for (j=0; j<n; j++)
if (i!=j)
A[i][j] = -A[i][j]/A[i][i];
b[i] = b[i]/A[i][i];
A[i][i] = 0.0;
}

  

 for (i = 0;i<n;i++){
 for (j = 0;j<n;j++){
printf("x[i][j] - %f\n",i,j,A[i][j]);
   }
  }




/*
for (i = 0;i<n;i++){
  for (j = 0;j<n;j++){
    if (i == j) 
       l[i][j] = 0;
         else
     l[i][j] = -(A[i][j] * k[i]);
     printf("l = %f\n",l[i][j]);
  }
}*/  

/*wyswietlenie*/


printf("cos");
return 0;
}
