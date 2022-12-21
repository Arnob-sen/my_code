#include<stdio.h>
int main()

{
    int a,b,c,s;
    scanf("%d %d %d",&a,&b,&c);

    if(a==1&&b==1&&c==1){

        s=a+b+c;
        printf("%d",s);
    }
    else if(a==1&&b==1&&c!=1){
        s=(a+b)*c;
        printf("%d",s);

    }
    else if(a!=1&&b==1&&c==1){
        s=(c+b)*a;
        printf("%d",s);

    }
    else if(a==1&&b!=1&&c==1){
        s=(a+b)+c;
        printf("%d",s);

    }
    else if(a==1&&b!=1&&c!=1){

        if(b>c){
            s=(a+b)*c;
        }
        else{
            s=(a+b)*c;
        }
        printf("%d",s);
    }
    else if(a!=1&&b==1&&c!=1){

        if(a>c){
            s=(b+c)*a;
        }
        else{
            s=(a+b)*c;
        }
        printf("%d",s);
    }
    else if(a!=1&&b!=1&&c==1){

        if(b>a){
            s=(b+c)*a;
        }
        else{
            s=(c+b)*a;
        }
        printf("%d",s);
    }

    else{
        s=a*b*c;
        printf("%d",s);
    }







    return 0;
}
