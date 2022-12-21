#include<stdio.h>

int main()

{
    char a[10000],b[10000];

    scanf("%s %s",&a,&b);
    for(int i=0;i<strlen(a);i++)
    {

        printf("%d",a[i]^b[i]);  // loop gurbe string joto lomba dibo tar upr.jodi 100 dai tkn 3br eivabe karon string length 3;prothom gurbe jodi a r 1St man r b r 1st man same na hoy 1 print korbe same hole 0 print.then abr gurbe abr same check.jehatu \n dai nai tai sob gula output ekline a dakaia final output banabe

    }

    return 0;
}
