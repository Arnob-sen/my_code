#include<stdio.h>
int main()
{

    int n,i,x,y,a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&x,&y,&a);
        if(a==1){
            printf("%d\n",y);

        }
        else if(x/a==y/a){
            printf("%d\n",y/a+y%a);

        }
        else if(y/a==a-1){
            printf("%d",y/a+a-1);
        }
        else{
            printf("%d\n",y/a-1+a-1);
        }
    }
}
