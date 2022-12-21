#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        printf("lower case\n");
    }
    else if(ch>='A'&&ch<='Z'){
        printf("upper case");
    }
    return 0;
}
