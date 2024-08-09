#include<stdio.h>
#include<math.h>
int main()
{
	float x,pro,res=0,arr1[50],arr2[50];
    int i,j,n;
    printf("Enter the no. of points : ");
    scanf("%d",&n);
    printf("Enter the given values of x:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr1[i]);
    }
    printf("Enter the corresponding values of f(x):\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr2[i]);
    }
    printf("Enter the interpolating point : ");
    scanf("%f",&x);
    for(i=0;i<n;i++)
    {
    	pro=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                pro=pro*(x-arr1[j])/(arr1[i]-arr1[j]);
            }
        }
        res=res+(pro*arr2[i]);
    }
    printf("The value of f(x) is : %.2f",res);
    return 0;
} 
