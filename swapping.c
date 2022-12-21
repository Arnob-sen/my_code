#include<stdio.h>

int main()

{
    char str1[20],str2[20],temp[20];
    gets(str1);
    gets(str2);
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("%s\n %s",str1,str2);




    return 0;
}
