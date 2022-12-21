#include<stdio.h>

int main()

{
    long long n,a=0,b=0,c=0;

    scanf("%lld",&n);

    long long ara[n],ara2[3];

    for(int i=0;i<n;i++){

        scanf("%d",&ara[i]);

        if(ara[i]==1){
            a++;
        }
        else if(ara[i]==2){
            b++;
        }
        else{
            c++;
        }
    }
    for(int i=0;i<n;i++){
            if(ara[i]==1 || ara[i]==2 || ara[i]==3){
                ara2[i]=i+1;
            }

    }
    if(a<1 || b<1 || c<1){

        printf("0\n");
    }

    else{

        if(a>=b && b>=c){
                for(int i=0;i<c;i++){
                        printf("%d ",ara2[i]);

                }

        }


        else if(b>=a && c>=a){

        if(a>=b && b>=c){
                for(int i=0;i<a;i++){
                        printf("%d ",ara2[i]);

                }


        }
        }
        else if(a>=b && c>=b){

        if(a>=b && b>=c){
                for(int i=0;i<b;i++){
                        printf("%d ",ara2[i]);

                }



        }
    }



    }
    return 0;
}
