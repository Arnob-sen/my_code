
#include<stdio.h>
int main()
{
    int n,i,a,b,s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a==0){
            s=(a*0+b*0)+1;
        }
        else{



      s=(a*1+b*2)+1;
        }


        printf("%d",s);



    }

    return 0;
}

