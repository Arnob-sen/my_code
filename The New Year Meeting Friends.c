#include<stdio.h>

int main()

{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if(a>b && b>c ){

        printf("%d\n",(a-b)+(b-c));

    }

    else if(a<b && a>c){

        printf("%d\n",(b-a)+(a-c));
    }
    else if(c>a && c<b)
        {
        printf("%d\n",(c-a)+(b-c));
    }
    else if( b>a && c>b){

        printf("%d\n",(b-a)+(c-b));
    }


    else if(a>b && c>a){
            printf("%d\n",(a-b)+(c-a));

    }

    else if(c<a && c>b )

{


    printf("%d\n",(c-b)+(a-c));
}



else  if(a==b && b==c){
    printf("0\n");
}


    return 0;
}
