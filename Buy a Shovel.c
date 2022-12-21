#include<stdio.h>


int main()

{
    int k,r;

    scanf("%d %d",&k,&r);


    int c=0;

    for(int i=1;;i++){

        int t=k*i;
     int   n=t%10;

        c++;
        if(t%10==0){
            break;
        }
        if(n==r){
            break;
        }

    }
    printf("%d\n",c);



    return 0;
}
