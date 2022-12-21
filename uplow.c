#include<stdio.h>

int main()
{
    char str[10],str1[10];
    gets(str);
    gets(str1);
    strlwr(str);
    strupr(str1);

    printf("%s %s ",str,str1);




    return 0;
}
