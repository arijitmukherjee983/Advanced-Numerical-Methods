#include<stdio.h>
#include<math.h>
float function(float x){
	float f=pow(x,2)*(x-2.5);/*pow(x,4)-(13*(pow(x,3)))+(62*(pow(x,2)))-(79*x);*/ //  2-(4*x)+(pow(2.7182,x));
	return f;
}
int main(){
	float a=0,b=1,x0,x1,x2,fx1,fx2;
	float ep=0.001/2;
	int c=1;
	while((b-a)>0.05){
		printf("Iteration %d :\n",c);
		printf("a = %f\n",a);
		printf("b = %f\n",b);
		x0=a+((b-a)/2);
		x1=x0-ep;
		x2=x0+ep;
		printf("x1 = %f\n",x1);
		printf("x2 = %f\n",x2);
		fx1=function(x1);
		fx2=function(x2);
		printf("fx1 = %f\n",fx1);
		printf("fx2 = %f\n",fx2);
		if(fx1>fx2){
			a=x1;
		}
		else{
			b=x2;
		}
		c++;
		printf("\n");
	}
	
	printf("a = %f\n",a);
	printf("b = %f\n",b);
	float xmin=(b+a)/2;
	float ans=function(xmin);
	printf("xmin = %f\n",xmin);
	printf("minimum = %f",ans);
	return 0;
}
