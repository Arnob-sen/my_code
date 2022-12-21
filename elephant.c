#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    if(n>=1 && n<=5){
        printf("1\n");
    }
    else if(n%5==0){
        s=n/5;
        printf("%d",s);
    }
    else{

            s=(n/5)+1;
            printf("%d",s);
    }
    return 0;

}
