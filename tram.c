#include<stdio.h>
int main()

{
    int n,i,a,b,sum=0,capacity=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){


        scanf("%d %d",&a,&b);
        sum+=-a+b;

        if(sum>capacity){
              capacity = sum; //prothom br to person present capacity thke boro hbei and oita capacity ta store hbe.er por abr loop gurbe .jodi ar person present capacity r boro hy tkn abr oi man ta capacity ta store hbe and print korbe capacity(loop r vitor sob cheye boro number print r upay)
        }








    }
    printf("%d\n",capacity);


    return 0;
}
