#include<stdio.h>
#include<math.h>
    float fx(float x, float y)
    {
        return (x - y)/2;
    }
    int main()
    {
        float x0,y0,yn,h=0.2,xn,n,k1,k2,k3,k4;
        int c=0;
        printf("Enter the value of x0 : ");
        scanf("%f",&x0);
        printf("Enter the value of y0 : ");
        scanf("%f",&y0);
        printf("Enter the value of xn : ");
        scanf("%f",&xn);
        n=(xn-x0)/h;
        while(c<n)
        {
            k1=h*fx(x0,y0);
            k2=h*fx(x0+(h/2),y0+(k1/2));
            k3=h*fx(x0+(h/2),y0+(k2/2));
            k4=h*fx(x0+h,y0+k3);
            yn=y0+((k1+(2*k2)+(2*k3)+k4)/6);
            x0=x0+h;
            y0=yn;
            c++;
        }
        printf("The value of y at %.3f = %.4f.",x0,yn);
        return 0;
    }
