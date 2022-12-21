
#include<stdio.h>

int main()

{

    int n;
    scanf("%d",&n);

    for(int i=n+1;i>0;i++){

            int p,q,r,s;

        p=i/1000;
        q=(i%1000)/100;
        r=(i%100)/10;
        s=i%10;


        if(p!=q && q!=r && r!=s && p!=s && p!=r && q!=s){
            printf("%d",i);
             break;
        }


    }
    return 0;

}
