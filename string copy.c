#include<stdio.h>

int main()


{
        char source[20],copy[20];
        gets(source);


        strcpy(copy,source);

        printf("source= %s\n",source);
        printf("copy = %s\n",copy);




    return 0;
}
