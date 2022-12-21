#include<stdio.h>

int main()

{
    int a,b;

    scanf("%d %d",&a,&b);

    if(a>b){

       int c=a-b;

       printf("%d %d",b,c/2);

    }
    else if(a<b){
        int c=b-a;

        printf("%d %d",a,c/2);
    }

    else{

        printf("%d 0",a);
    }



    return 0;
}
