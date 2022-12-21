#include<stdio.h>
int main()

{
    int n,a,b;

    scanf("%d",&n);

    scanf("%d %d",&a,&b);
    if(a+b<=n)printf("YES\n");

    else{
        printf("NO\n");
    }
    return 0;
}
