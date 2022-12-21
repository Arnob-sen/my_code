#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int c=1;
   while(scanf("%s",&str)){



    if(strcmp(str,"HELLO")==0) printf("Case %d: ENGLISH\n",c++);

    else  if(strcmp(str,"HOLA")==0) printf("Case %d: SPANISH\n",c++);
    else if(strcmp(str,"HALLO")==0) printf("Case %d: GERMAN\n",c++);
    else if(strcmp(str,"BONJOUR")==0) printf("Case %d: FRENCH\n",c++);

    else if(strcmp(str,"CIAO")==0) printf("Case %d: ITALIAN\n",c++);
    else if(strcmp(str,"ZDRAVSTVUJTE")==0) printf("Case %d: RUSSIAN\n",c++);

    else if(strcmp(str,"#")==0) break;

    else printf("Case %d: UNKNOWN\n",c++);
}
    return 0;
}
