#include<stdio.h>
int main()
{
    int n,i,s=0;
    char str[1000];
    scanf("%d",&n);
    scanf("%s",&str);



    for( i=0;i<n;i++){

        if(str[i]==str[i+1])
        s++;
    }
         printf("%d",s);



    return 0;
}
