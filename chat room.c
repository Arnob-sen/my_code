#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000]="hello",c;
    int i=0;

    while(scanf("%c",&c )&& c!='\n'){

    if(c==str[i]){
        i++;
    }
}
    if(i==5){
        printf("YES\n");

    }

   else

    printf("no\n");


    return 0;
}
