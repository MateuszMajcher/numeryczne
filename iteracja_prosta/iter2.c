#include<stdio.h>
#define N 3
int main(){
float A[N][N] = {{3, 2, 1}, /* Macierz współczynników */
                 {0, 1, 0},
                 {1, 1, 2}};
float B[N] = {4, 1, 5};
float C[N]= {0, 0, 0};
float x[N]= {0, 0, 0};
int m=10;

int i,j;
/*diagonalna
for (i=0; i<N; i++)
{
	for (j=0; j<N; j++)
		if (i!=j)
     			A[i][j] = -A[i][j]/A[i][i];
  		B[i] = B[i]/A[i][i];
  		A[i][i] = 0.0;
}

*/
for (i = 0;i<N;i++){
 for (j = 0;j<N;j++){
      printf(" %f ",A[i][j]);
   }
    printf("\n");
  }


while(m>0)
	{
		for(i=0;i<N;i++)
		{
			C[i]=(B[i]/A[i][i]);
			for(j=0;j<N;j++)
			{
				if(j!=i)
					
				C[i]=C[i]-((A[i][j]/A[i][i])*x[j]);
			}
			printf("x%d = %f",i+1,C[i]);
		}
		
                for(i=0;i<N;i++)
	{
		x[i]=C[i];
		
	}



		printf("\n\n");
		m--;
	}



return 0;
}
