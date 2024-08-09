#include<math.h>
#include<stdio.h>
int main()
{
	int n,i,j,k,m;
	float mul=0.0,arr[100][100],brr[100],x[100]={0},p,lambda;
	printf("Enter the size of the matrix : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%f",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%.2f ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Enter the initial approximation :\n");
	for(i=0;i<n;i++){
			printf("brr[%d] = ",i);
			scanf("%f",&brr[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
			printf("%f\n",brr[i]);
	}
	printf("\n");
	printf("Enter the no. of iterations : ");
	scanf("%d",&m);
	
	
	//eigen vector
	for(k=0;k<m;k++){
		for(i=0;i<n;i++){
			mul=0.0;    
			for(j=0;j<n;j++){   
					mul=mul+(arr[i][j]*brr[j]);
			}
			x[i]=mul;
		}
		for(i=0;i<n;i++){
			brr[i]=x[i];
		}
	}
	
	p=fabs(x[1]);
	for(i=0;i<n;i++){
		  if(fabs(x[i])<p){
		   	p=fabs(x[i]);
		  }
	}
	
	printf("Dominant eigen vector : \n");
	for(i=0;i<n;i++){
	  	x[i] = x[i]/p;
	  	printf("%f\n",x[i]);
	}
	
	// eigen value
	float x1[100],x2,x3;
	
	for(i=0;i<n;i++){
		mul=0.0;    
		for(j=0;j<n;j++){   
				mul=mul+(arr[i][j]*x[j]);
		}
		x1[i]=mul;  // x1 -> AX
	}
	
	for(i=0;i<n-1;i++){
		mul=0.0;
		for(j=0;j<n;j++){
			mul=mul+(x[j]*x1[j]);  
		}
		x2=mul;
	}
	
	//printf("%f\n",x2);		// x2 -> AX.X
	
	for(i=0;i<n-1;i++){
		mul=0.0;
		for(j=0;j<n;j++){
			mul=mul+(x[j]*x[j]);  
		}
		x3=mul;
	}
	
	//printf("%f\n",x3);	 // x3 -> X.X

	lambda=(x2/x3);   // lambda=(AX.X / X.X)
	
	printf("Dominant eigen value : %f\n",lambda);
	 
	return 0;
}
