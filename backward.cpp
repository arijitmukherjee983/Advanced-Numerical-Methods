#include<stdio.h>
int main()
{

    float a[100][100],p,h,x,sum=0.0,term=1.0;
    int i,j,n;
    printf("Enter the no of points = ");
    scanf("%d",&n);
    printf("Enter the values of x : \n");
    for(i = 0;i<n;i++)
	{
        scanf("%f",&a[i][0]);
    }
    printf("Enter the values of y : \n");
    for(i = 0;i<n;i++)
	{
        scanf("%f",&a[i][1]);
    }
    for(j=2;j<=n;j++)
	{
        for(i=n-1;i>=j-1;i--)
		{
            a[i][j] = a[i][j-1] - a[i-1][j-1];
        }
    }
    printf("Table is : \n");
    for(i=0;i<n;i++){
        for(j=0;j<=i+1;j++){
            printf("%.2f\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the interpolating point : ");
    scanf("%f",&x);
    h=a[1][0]-a[0][0];
    p=(x-a[n-1][0])/h;
    sum=a[n-1][1];
    for(j=2;j<n+1;j++)
    {
        term= term *(p+j-2)/(j-1);
        sum=sum+term * a[n-1][j];
    }
    printf("\nThe result is: %f",sum);
    return 0;     
}
