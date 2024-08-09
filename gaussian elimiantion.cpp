#include<stdio.h>
int main()
{
	int n,i,j,k;
	float a[10][10],x[20],sum,ratio;
	printf("Enter the no. of equations : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("Enter element : ");
			scanf("%f",&a[i][j]);
		}
	}
	printf("\n");
	printf("The Augmented matrix -- \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%.2f\t ",a[i][j]);
		}
		printf("\n");
	}
	for(k=0;k<n-1;k++)
	{
		for(i=k+1;i<n;i++)
		{
			ratio=(a[i][k]/a[k][k]);
			for(j=0;j<n+1;j++)
			{
				a[i][j]=a[i][j]-(ratio*a[k][j]);	
			}
		}
	}
	printf("\n");
	printf("The Echelon form is -- \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			printf("%.2f\t ",a[i][j]);
		}
		printf("\n");
	}

	x[n-1]=a[n-1][n]/a[n-1][n-1];
	for(i=n-2;i>=0;i--)
	{
		sum=0.0;
		for(j=i+1;j<n;j++)
		{
			sum=sum+a[i][j]*x[j];
		}
		x[i]=(a[i][n]-sum)/a[i][i];
	}
	printf("\nThe solutions are \n");
	for(i=0;i<n;i++)
	{
		printf("x[%d]=%.2f\n",i,x[i]);
	}
		return 0;
}
