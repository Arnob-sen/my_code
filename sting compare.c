#include<stdio.h>

int main()
{
    char str1[100],str2[100];

    gets(str1);
    gets(str2);
    int count=strcmp(str1,str2);
    if(count==0)
    printf("equal");


    else{

    printf("not equal");
    }



    return 0;
}
