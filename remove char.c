#include<stdio.h>

#include<string.h>

int main()

{
        char str[100];
        int d=0,i,j;

    scanf("%s",&str);
    strlwr(str);

     d=strlen(str);

    for(i=0;i<d;i++){

         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
           for(j=i;j<d;j++){
            str[j]=str[j+1];
           }
           i--;
           d--;

    }


            }
            int len=d+d;

        for(i=0;i<len;i++){
             if (str[i] != 'a' || str[i] != 'e' || str[i] != 'i' || str[i] != 'o' || str[i] != 'u')
                    str[i]+=46;

             str[d+1]='\0';

        }


    printf("%s %d",str,len);



    return 0;
}
