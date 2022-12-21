#include<stdio.h>

int main()

{

    float s,n,c=0,a,b=0;

    scanf("%f",&n);

    for(int i=0;i<n;i++){


        scanf("%f",&a);
        c=c+a;
        b++;
    }
    s=c/b;

    printf("%f",s);






    return 0;
}
