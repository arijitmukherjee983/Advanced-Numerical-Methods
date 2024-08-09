#include<stdio.h>
float fact(float k){
    if(k == 0.0){
        return 1.0;
    }
    return k*fact(k-1);

}
float result(float p,int k){
    int m;
    float product = 1;
    if(k == 0){
        return 1;
    }
    else{
        for(m = 0;m<k;m++){
            product = product * (p-m);
        }
        return product;
    }
}
int main(){

    float a[100][100];
    int i,k,j,n;
    float p, h, x, res = 0.0;
    printf("Enter the no. of points = ");
    scanf("%d",&n);
    printf("Enter the values of X = \n");
    for(i = 0;i<n;i++)
	{
        scanf("%f",&a[i][0]);
    }
    printf("Enter the values of Y = \n");
    for(i = 0;i<n;i++)
	{
        scanf("%f",&a[i][1]);
    }
    for(j=2;j<n+1;j++)
	{
        for(i = 0;i<n-j+1;i++)
		{
            a[i][j] = a[i+1][j-1] - a[i][j-1];
        }
    }

    printf("Table is : \n");
    for(i = 0;i<n;i++){
        for(j = 0;j<n+1;j++){
            if(a[i][j] == 0.00){
                break;
            }
            printf("%.2f ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the interpolating point : \n");
    scanf("%f",&x);
    h = a[1][0] - a[0][0];
    //printf("h = %.2f",h);
    p = (x - a[0][0])/h;
    //printf("\np = %.2f\n",p);
    for(k = 0;k<n;k++)
	{
        res = (float)res + (result(p,k)/fact(k))* a[0][k+1];
    }
    printf("value of x = %.2f is %.2f",x,res);
    return 0;

}
