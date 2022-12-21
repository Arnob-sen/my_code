#include<stdio.h>

int main()

{
    int n,c=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);

    strlwr(str);

   int d= strlen(str);

   for(int i=0;i<d;i++){

    if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z')
        c++;
   }
   if(c>=26){
    printf("yes\n");
   }
   else
    printf("no");

   return 0;
}
