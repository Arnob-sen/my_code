#include<stdio.h>
#include<string.h>

int main()


{
    int t;
    scanf("%d",&t);
    while(t--){
    char str1[]="YES";
    char str[200];
    scanf("%s",&str);
    strupr(str);
   int d= strcmp(str1,str);

   if(d==0)printf("YES\n");
   else printf("NO\n");

    }

}
