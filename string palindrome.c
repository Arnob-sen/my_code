#include<stdio.h>
int main()

{
    char str[10],str2[10];
    gets(str);

    strrev(str);//reverse korlm
    strcpy(str2,str);//copy korlm str r element str2 te mane str r value reverse korlm seta str a roilo and oi str value str 2 ta copy

    strrev(str2);
    strcpy(str,str2);

    printf("%s\n",str); //print korlm 2 ta string
    printf("%s\n",str2);

    int d=strcmp(str,str2);//compare korlm

    if(d==0){

        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }







    return 0;
}
