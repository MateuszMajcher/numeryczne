				
//**************************************
// Name: Jacobi Iteration(Solution of Equations)
// Description:There method can be used to solve a set of linear equations that are based on iteration. Here, an initial estimate of the parameters is estimated and then the equations are solved, yielding an updated version of the parameters
// By: Akash Khaitan
//
//This code is copyrighted and has// limited warranties.Please see http://www.Planet-Source-Code.com/vb/scripts/ShowCode.asp?txtCodeId=13628&lngWId=3//for details.//**************************************

#include<stdio.h>
int main(void)
{
	void copy(float [],float [],int);
	float a[10][10],b[10],x[10],y[10],tem=0,temp=0,temp1=0,temp2=0,temp4=0,temp5=0;
	int n=0,m=0,i=0,j=0;
	printf("Enter size of 2d array(Square matrix) : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter values no. %d %d :",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("\nEnter Values to the right side of equation\n");
	for(i=0;i<n;i++)
	{
			printf("Enter values no. %d :",i,j);
			scanf("%f",&b[i]);
	}
	printf("\nEnter initial values of x\n ");
	for(i=0;i<n;i++)
	{
		printf("Enter values no. %d :",i);
		scanf("%f",&x[i]);
	}
	printf("\nEnter the no. of iteration : " );
	scanf("%d",&m);
	while(m>0)
	{
		for(i=0;i<n;i++)
		{
			y[i]=(b[i]/a[i][i]);
			for(j=0;j<n;j++)
			{
				if(j!=i)
					
				y[i]=y[i]-((a[i][j]/a[i][i])*x[j]);
			}
			printf("x%d = %f	",i+1,y[i]);
		}
		
                for(i=0;i<n;i++)
	{
		x[i]=y[i];
		
	}



		printf("\n\n");
		m--;
	}
	return 0;
}

