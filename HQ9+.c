#include<stdio.h>
#include<string.h>

int main()

{
    char str[150];
    int c=0;
    scanf("%s",str);

    int d=strlen(str);

    for(int i=0;i<d;i++){

        if(str[i]=='H'|| str[i]=='Q'|| str[i]=='9'){
            c++;
        }
    }
    if(c>=1)printf("YES\n");

    else
        printf("NO\n");





    return 0;
}
