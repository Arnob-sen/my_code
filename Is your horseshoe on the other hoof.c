#include<stdio.h>
int main()


{
    int n,s=0,a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b && b==c && c==d)
    {
        s=s+3;
        printf("%d",s);
    }
    else if(a!=b && b!=c && c!=d && a!=c && a!=d && b!=d){
        printf("%d",s);
    }

    else if((a==b && b==c && c!=d)  ||  (a==c && b==d && c!=d && a!=b) || (a==b && c==d && a!=c) ){
        s=s+2;
        printf("%d",s);

    }
    else if(a==c && b==d){
        s=s+2;
        printf("%d",s);
    }
    else if(a==d && b==c){
        s=s+2;
        printf("%d",s);
    }
    else if(a!=b && b!=c && c==d && a==d && b!=d){
        s=s+2;
        printf("%d",s);
    }
        else if(a!=b&&a!=c&&a!=d&&b==c&&c==d){
                 s=s+2;
        printf("%d",s);


        }

    else{
        s++;
        printf("%d",s);
    }











    return 0;
}
