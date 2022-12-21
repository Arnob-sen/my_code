#include<stdio.h>
#include<string.h>

int main()

{



    char str[1000];

    gets(str);
    int d=strlen(str);
    int i=0;
    for(i=0;i<d;i++){
        if(str[i]==' '){
            printf("\n");
        }

    }
    printf("%s",str);

}

