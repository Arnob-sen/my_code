#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000],str2[1000],copy[1000];
    scanf("%s",&str);
    scanf("%s",&str2);
    strrev(str);
    //strcpy(copy,str);

  int d=  strcmp(str,str2);
  if(d==0){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }







    return 0;
}
