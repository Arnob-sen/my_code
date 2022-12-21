#include<stdio.h>
#include<string.h>

int main()

{
    char str[150];
    gets(str);

    strlwr(str);
    int d=strlen(str);

    for(int i=0;i<d;i++)
    {   if(str[i]!='a'&& str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u' && str[i]!='y'){

        if( str[i]<='Z'){
            str[i]+=32;
        }
        printf(".%c",str[i]);

        }


    }












    return 0;
}
