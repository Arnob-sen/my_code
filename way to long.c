#include<stdio.h>
#include<string.h>


int main()

{
    char s[110];
    int n,d;
    scanf("%d\n",&n);
    while(n--)
{


        gets(s);
        if( (d=strlen(s))>10){
                printf("%c%d%c\n",*s,d-2,s[d-1]);

    }
    else{
        puts(s);
       // printf("%s",s);
    }


    }
    return 0;
}





















