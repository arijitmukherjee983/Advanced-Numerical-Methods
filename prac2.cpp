#include<stdio.h>
#include<math.h>
float function(float x){
	float f=3*(pow(x,2))-(21.6*x)+1;
	return f;
}
int main(){
	float arr[20]={1,1,2,3,5,8,13,21,34};
	float a=0,b=25,x1,x2,fx1,fx2;
	float i0=2;
	float fn1=i0/0.3;
	int fn=(int)fn1;
	int i=1,c=1;
	while(i<7){
		printf("Iteration %d :\n",c);
		printf("a = %f\n",a);
		printf("b = %f\n",b);
		i0=(arr[fn]/arr[fn+1])*(b-a);
		printf("fn=%d\n",fn);
		x1=a+i0;
		x2=b-i0;
		printf("x1 = %f\n",x1);
		printf("x2 = %f\n",x2);
		fx1=function(x1);
		fx2=function(x2);
		printf("fx1 = %f\n",fx1);
		printf("fx2 = %f\n",fx2);
		if(fx1>fx2){
			b=x1;
		}
		else{
			a=x2;
		}
		printf("\n");
		c++;
		i++;
		fn--;
	}
	printf("a = %f\n",a);
	printf("b = %f\n",b);
	float xmin=(b+a)/2;
	float ans=function(xmin);
	printf("xmin = %f\n",xmin);
	printf("minimum = %f",ans);
	return 0;
}
