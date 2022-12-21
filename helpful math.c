#include<stdio.h>
#include<string.h>

int main()


{
    char str[100],max;
    gets(str);
    int s=0,i;
    while(str[i]='\0'){

        if(str[i]>s){
            s=str[i];
        }


            else if(str[i]==43){

                max=str[i];
            }
             i++;



    }
     printf("%d%s",str[s], str[max]);




    return 0;
}
