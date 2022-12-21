#include<stdio.h>

int main()

{

    char str[100],ch;
    int i,vowel,cons,digit,word,other;

    gets(str);
    i=vowel=cons=digit=word=other=0;

    while((ch=str[i])!='\0'){

            if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'||ch=='O'||ch=='U')
            {vowel++;
            }
            else if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
               {
                cons++;
               }


            else if(ch>='0'&&ch<='9')
                digit++;
            else if(ch==' '){
                word++;
            }

            else{
                other++;
            }
             i++;

    }
    word++;

            printf("%d\n",vowel);
            printf("%d\n",cons);
            printf("%d\n",digit);
            printf("%d\n",word);
            printf("%d\n",other);






    }








