#include<stdio.h>
float f(float x, float y){
    return x+y;
}
int main(){
    float x0,y0,xn,h,x,y;
    printf("x0 = \n");
    scanf("%f",&x0);
    printf("y0 = \n");
    scanf("%f",&y0);
    printf("xn = \n");
    scanf("%f",&xn);
    printf("h = \n");
    scanf("%f",&h);
    x = x0;
    y = y0;
    while(x<xn){
        y = y + h*f(x,y);
        x = x + h;
        }
    printf(" value of %.4f is %.4f",xn,y);
    return 0;
}

/*
//Euler method   
#include<stdio.h>
int main()
{
	float x0,x1=0.0,y0,yn,xn,h=0.2,r=0;
	printf("Enter the value of y0 : ");
	scanf("%f",&y0);
	printf("Enter the value of x0 : ");
	scanf("%f",&x0);
	printf("Enter the value of xn : ");
	scanf("%f",&xn);
	
	float f=x0*y0;
	
	do{
		f=x0*y0;
		x0=x0+(r*h);
		//printf("%f\t",x0);
		yn=y0+(h*f);
		//printf("%f\n",y0);
		r++;
	}while(x0<xn);
	printf("The value of yn is : %f",yn);
	return 0;
}


*/
