#include<stdio.h>
#include<string.h>

int main()

{
    char str[1000000];
    scanf("%s",&str);
    printf("%s",str);

    strrev(str);
    printf("%s",str);


    return 0;
}
