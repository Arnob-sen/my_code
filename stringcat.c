#include<stdio.h>


int main()

{
        char str[20],str2[20];
    gets(str);
    gets(str2);

    strcat(str,str2);
    printf("%s",str);




    return 0;
}
