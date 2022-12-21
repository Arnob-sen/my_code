#include<stdio.h>

int main()

{
    int r;

    scanf("%d",&r);


    if(r<=50)printf("100\n");

    else if(r<=100 && r>50)printf("50\n");

    else printf("0\n");



    return 0;
}
