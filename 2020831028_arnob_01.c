#include<stdio.h>
int main()
{
    int n,line,num;


    scanf("%d",&n);


    for(line=1;line<=n;line++)

        {
        for(num=1;num<=line;num++) //joto gula line totogula star print  korbe

        {
            printf("*");//mainly line jotobr gurbe toto gula kore star print korbe jemon line jodi 3 hoy tokon 3 br star print korbe that means 3 ta star print korbe tar por new line
        }
        printf("\n");
    }
    return 0;
}


