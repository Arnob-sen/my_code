#include<stdio.h>
#include<string.h>

int main()

{
    char str[100];
    int c=0,s=0;
    scanf("%s",&str);
    int d=strlen(str);
    int u=d/2;

    for(int i=0;i<d;i++){

        if(str[i]>='A' && str[i]<='Z'){
            c++;
        }
        else {
            s++;
        }


    }

    if(c>u){
        strupr(str);
        printf("%s\n",str);
    }
    else {


        strlwr(str);
        printf("%s\n",str);
    }






    return 0;
}
