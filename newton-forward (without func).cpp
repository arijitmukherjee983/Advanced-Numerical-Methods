#include<stdio.h>
int main()
{

    float a[100][100],p, h, res = 0.0, term=1.00,sum,x;
    int i,j,k,n;
    printf("Enter the no of points = ");
    scanf("%d",&n);
    printf("Enter the values . of x : \n");
    for(i = 0;i<n;i++)
	{
        scanf("%f",&a[i][0]);
    }
    printf("Enter the values of y : \n");
    for(i = 0;i<n;i++)
	{
        scanf("%f",&a[i][1]);
    }
    for(j=2;j<n+1;j++)
	{
        for(i=0;i<n-j+1;i++)
		{
            a[i][j] = a[i+1][j-1] - a[i][j-1];
        }
    }
    printf("Table is : \n");
    for(i = 0;i<n;i++)
	{
        for(j = 0;j<n+1;j++)
		{
            if(a[i][j] == 0.00)
			{
                break;
            }
            printf("%.2f ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the interpolating point : ");
    scanf("%f",&x);
    h=a[1][0]-a[0][0];
    p=(x-a[0][0])/h;
    sum=a[0][1];
    for(j=2;j<=n;j++)
    {
        term= term *(p-(j-2))/(j-1);
        sum+=term * a[0][j];
    }
    printf("\nThe result is: %f",sum);
    return 0;     
}
