#include<stdio.h>
#include<math.h>
float function(float x){
	float f=((7*pow(x,3))+(pow(x,2))-(11*x)+20);  /*pow(x,2)*(x-2.5);*/  /*pow(x,4)-(13*(pow(x,3)))+(62*(pow(x,2)))-(79*x);*/
	return f;
}
int main(){
	float l=0.618,ls,x1,x2,fx1,fx2;
	float a=0,b=1;
	int l0=b-a;
	int i=2;
	int c=1; // c-> iteration
	while((b-a)>0.15){
		printf("Iteration %d :\n",c);
		printf("a = %f\n",a);
		printf("b = %f\n",b);
		ls=pow(l,i)*l0;
		printf("l%d* = %f\n",i,ls);
		x1=a+ls;
		x2=b-ls;
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
		i++;
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
