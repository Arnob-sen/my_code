#include<stdio.h>
void main()
{

   char str[20];
    fgets(str,sizeof(str),stdin);
    str[0]='X';


    printf("%s",str);


}
