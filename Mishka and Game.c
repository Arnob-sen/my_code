#include<stdio.h>

int main()

{

    int t,a,b,c=0,m=0,f=0;

    scanf("%d",&t);

    for(int i=0;i<t;i++){

        scanf("%d %d",&a,&b);

        if(a>b){
            m++;
        }
        else if(b>a){
            c++;
        }

        /*/
        else{
            f++;
        }
        /*/
    }
    if(m>c){
        printf("Mishka\n");
    }

    else if(c>m){

        printf("Chris\n");
    }
else {

    printf("Friendship is magic!^^\n");
}



    return 0;
}
