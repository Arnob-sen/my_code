#include<stdio.h>

int main()

{
        char str[10];

    gets(str);

    if(str[0]>=97){
        str[0]-=32;



            printf("%s",str);


    }
    else {
        printf("%s",str);
    }


    return 0;
}