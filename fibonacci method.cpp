#include<stdio.h>
#include<math.h>
float function(float x){
	float f=/*pow(x,2)*(x-2.5);*/pow(x,4)-(13*(pow(x,3)))+(62*(pow(x,2)))-(79*x);
	return f;
}
int main(){
	float arr[20]={1,1,2,3,5,8,13,21,34,55,89};
	float a=0,b=2,x1,x2,fx1,fx2;
	float i0=b-a;
	float fn1=i0/0.3;
	int fn=(int)fn1;
	int i=1,c=1;
	while((b-a)>0.3){
		printf("Iteration %d :\n",c);
		printf("a = %f\n",a);
		printf("b = %f\n",b);
		i0=(arr[fn]/arr[fn+1])*(b-a);
		printf("i0=%f\n",i0);
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
		printf("b-a=%f\n",(b-a));
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
