#include<stdio.h>
#include<math.h>
float function(float x){
	float f=((pow(x,5))-(4*(pow(x,3)))-(21*x)-5); /*((pow(x,4))-(14*(pow(x,2)))-(60*x));*/  //pow(x,4)-(13*(pow(x,3)))+(62*(pow(x,2)))-(79*x); //2-(4*x)+(pow(2.7182,x));
	return f;
}
int main(){
	float a=0,b=5,x0,x1,x2,fx0,fx1,fx2;
	//float ep=0.002;
	int c=1;
	int i=1;
	int n=6;
	while(i<n+1){
		printf("Iteration %d:\n",c);
		printf("a = %f\n",a);
		printf("b = %f\n",b);
		printf("i = %d\n",i);
		x0=(b+a)/2;
		x1=a+((b-a)/4);
		x2=b-((b-a)/4);
		printf("x0 = %f\n",x0);
		printf("x1 = %f\n",x1);
		printf("x2 = %f\n",x2);
		fx0=function(x0);
		fx1=function(x1);
		fx2=function(x2);
		printf("fx0 = %f\n",fx0);
		printf("fx1 = %f\n",fx1);
		printf("fx2 = %f\n",fx2);
		if((fx1>fx0) && (fx2<fx0)){
			a=x0;
		}
		else if((fx1<fx0) && (fx2>fx0)){
			b=x0;
		}
		else if((fx1>fx0) && (fx2>fx0)){
			a=x1;
			b=x2;
		}
		c++;
		i++;
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
