#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    float arr[20][20],b[20],newx[20]={0},oldx[20]={0};
    printf("Enter number of variables : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter coefficients for equation %d \n",(i+1));
        for(j=0;j<n;j++){
            scanf("%f",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        printf("Enter coefficients for equation %d \n",(i+1));
        scanf("%f",&b[i]);
    }
    
    float sum=0,diff,t;
    int c=0;
    printf("Enter tolerence : ");
    scanf("%f",&t);
    do{
		for(i=0;i<n;i++)
		{
			sum=0.0;
	        for(j=0;j<n;j++)
			{
	            if(i!=j)
				{
	                sum=sum+(arr[i][j]*newx[j]);
	            }
	        }
	        oldx[i]=newx[i];
	        newx[i]=(b[i]-sum)/arr[i][i];
	    }
	    c=0;
	    for(i=0;i<n;i++)
		{
		    diff=fabs(oldx[i]-newx[i]);
		    if(diff<t)
			{
				c++;
			}
		}
    }while(c<n);
    for(i=0;i<n;i++)
    {
    	printf("x[%d] = %f \n",i,newx[i]);
	}
	return 0;
}
