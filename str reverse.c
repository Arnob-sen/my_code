#include<stdio.h>
int main()


{
            char str[100],str2[100],j;

    gets(str);
    int i=0,len=0;
    while(str[i]!='\0'){

        i++;
        len++;
    }

    for( j=0,i=len-1;i>=0;j++,i--){

        str2[j]=str[i];

    }
    str2[j]='\0';


    printf("%s",str2);



    return 0;
}
