#include <stdio.h>
#include <stdlib.h>
double Newton (int n, int k)
{
int i, j;
int B[100][100];
for(i=0; i <= n; i++)
for(j=0; j <=(i,k); j++)
if(j == 0 || j == i)
B[i][j] = 1;
else
B[i][j] = B[i-1][j-1] + B[i-1][j];
return B[n][k];
}
int main(void)
{
unsigned int n, k;
printf("Podaj n:\n");
scanf("%d", &n );
printf("Podaj k:\n");
scanf("%d", &k ); // Wczytywanie liczb

if( k == 0 || k == n ) puts("1"); // Je¿eli k = 0 lub k = n to wypisz 1
else printf( "%.0lf\n", Newton(n, k) ); // W przeciwnym wypadku oblicz wartoœæ symbolu newtona
system("pause");
return 0;
}
