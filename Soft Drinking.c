#include<stdio.h>

int main(){


        int n, k, l, c, d, p, nl, np;

        scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

        int m=(k*l)/nl;
        int a=c*d;
        int s=p/np;

        if(a>=m && s>=m){
            printf("%d\n",m/n);
        }
        else if(m>=a && s>=a){
                printf("%d\n",a/n);
                }

                    else if(m>=s && a>=s){
                        printf("%d\n",s/n);
                    }



    return 0;
}


