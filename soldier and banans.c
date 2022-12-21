#include<stdio.h>
int main()
{
    int k,n,w,s,t=0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1;i<=w;i++){
        t+=k*i;
    }
    s=t-n;

        if(n>=t){
            printf("0");
        }
        else{


    printf("%d",s);
        }
    return 0;
}
