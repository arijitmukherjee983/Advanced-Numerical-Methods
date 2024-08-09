#include<stdio.h>
int main()
{
	/*float a[10][10],ratio,x[10];
	int i,j,n,k;
	printf("Enter no. of equations : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n+1;j++){
			printf("enter element : ");
			scanf("%f",&a[i][j]);
		}
	}
	printf("The augmented matrix :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n+1;j++){
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("The echelon form :\n");
	for(k=0;k<n-1;k++){
		for(i=k+1;i<n;i++){
			ratio=a[i][k]/a[k][k];
			for(j=0;j<n+1;j++){
				a[i][j]=a[i][j]-(ratio*a[k][j]);
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n+1;j++){
			printf("%.2f\t",a[i][j]);
		}
		printf("\n");
	}
	
	x[n-1]=a[n-1][n]/a[n-1][n-1];
	for(i=n-2;i>=0;i--){
		float sum=0.0;
		for(j=i+1;j<n;j++){
			sum=sum+a[i][j]*x[j];
		}
		x[i]=(a[i][n]-sum)/a[i][i];
	}
	printf("solutions are -\n");
	for(i=0;i<n;i++){
		printf("x[%d]=%.2f\n",i,x[i]);
	}
	
	
	10.66
13.06
15.07
16.84
18.45
19.93
21.30
	*/
	
	
	
	/*float a[10][10],x,h,p,sum=0,term=1;
	int i,j,n;
	printf("Enter the no. of points : ");
	scanf("%d",&n);
	printf("Enter the value of x :\n");
	for(i=0;i<n;i++){
		scanf("%f",&a[i][0]);
	}
	printf("Enter the value of f(x) :\n");
	for(i=0;i<n;i++){
		scanf("%f",&a[i][1]);
	}
	
	for(j=2;j<n+1;j++)
	{
        for(i=0;i<n-j+1;i++)
		{
            a[i][j] = a[i+1][j-1] - a[i][j-1];
        }
    }
	printf("The newton forward table : \n");
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
	printf("Enter the interpolating point : ");
	scanf("%f",&x);
	h=a[1][0]-a[0][0];
	p=(x-a[0][0])/h;
	sum=a[0][1];
	for(j=2;j<=n;j++){
		term=term*(p-(j-2))/(j-1);
		sum=sum+(term*a[0][j]);
	}
	printf("\nthe result is %.2f",sum);
	
	return 0;*/
	
	
	#include<stdio.h>
	int main()
	{
		int i,j,k,n;
		float 
	}

}
