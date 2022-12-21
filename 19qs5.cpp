#include<stdio.h>
int main()
{
    int a=626;
    int b=5;
    float c=a/b;
    int d=a/b;
    printf("%.2f\n",c);
    printf("%d\n",a++);
    printf("%d\n",--a);
    printf("%d\n",(a--)+1);
    printf("%d\n",((a--)+(a++)));
    printf("%d\n",a++);
    printf("%d\n",++a);
}
