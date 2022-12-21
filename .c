#include<stdio.h>
#include<String.h>


main()
{
    char s[110];
int n,p;
scanf("%d\n",&n);


while(n--)

{

gets(s);

if((p=strlen(s))>10){


printf("%c%d%c\n",*s,p-2,s[p-1]);
}


else {
        puts(s);
}


}
}

