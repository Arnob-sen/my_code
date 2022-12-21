#include<stdio.h>
int main()

{
    char str[30];
    gets(str);
    int i=0;
    while(str[i]!='\0'){
        printf("%c\n",str[i]);
        i++;
    }


    getch();
}
