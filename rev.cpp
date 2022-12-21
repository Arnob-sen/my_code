#include<stdio.h>
#include<string.h>

int main()
{

    char str[100];
    gets(str);
    int d=strlen(str);
    for(int i=d-1;i>=0;i--)printf("%c",str[i]);
}
