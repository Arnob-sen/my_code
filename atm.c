#include<stdio.h>

int main()
{
    int n;
    float a;

    scanf("%d",&n);
    scanf("%f",&a);

    if(a>=n){
    if(n%5==0){
        printf("%.2f\n",(float)a-n-0.5);
    }
     else
        printf("%.2f\n",a);
    }

    else if(a<n)
        printf("%.2f\n",a);
    return 0;
}
