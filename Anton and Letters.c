#include<stdio.h>

int main()
{
  char str[100],same;
  int c=0;
    scanf("%s",&str);
    int d=strlen(str);

    for(int i=1;i<d;i=i+2){
            same=str[i];

        if(str[i]==str[i+1]){
            continue;
        }
        else if(str[i]!=str[i+1]){
            c++;
        }
    }
    printf("%d",c);



    return 0;
}
