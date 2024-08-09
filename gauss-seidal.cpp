#include <stdio.h>
#include <math.h>
int main(){
    int n,i,j;
    printf("Enter number of variables\n");
    scanf("%d",&n);
    float arr[n][n+1],sol[n],psol[n];
    for(i=0;i<n;i++){
        printf("Enter coefficients for equation %d \n",(i+1));
        for(j=0;j<=n;j++){
            scanf("%f",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sol[i]=0;
        psol[i]=0;
    }
    float s,diff,t;
    int c=0;
    printf("Enter tolerence\n");
    scanf("%f",&t);
    while(1){
        for(i=0;i<n;i++){
            psol[i]=sol[i];
            s=0.0;
            for(j=0;j<n;j++){
                if(i!=j){
                    s+=(arr[i][j]*sol[j]);
                }
            }
            s=(arr[i][n]-s)/arr[i][i];
            sol[i]=s;
        }
        c=0;
        for(i=0;i<n;i++){
            diff=psol[i]-sol[i];
            diff=fabs(diff);
            if(diff<t) {c++;}
        }
        if(c>=n) {break;}
    }
    for(i=0;i<n;i++){
        printf("x%d = %f \n",i,sol[i]);
    }
    return 0;
}
