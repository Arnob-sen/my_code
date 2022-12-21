#include<stdio.h>

int main()

{
    int t,c,d;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
            c=0;
            d=0;
        int n;
        scanf("%d",&n);

        int ara[10000];
        for(int i=0;i<(2*n);i++){
            scanf("%d",&ara[i]);
            if(ara[i]%2==0)
                c++;
                else{
                    d++;
                }


        }
        //
          // for(int i=0;i<(2*n);i++){


           // if((ara[i]+ara[i+1])%2!=0)
               // c++;


          // printf("%d",c);
        if(c==d){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }


        //printf("%d",c);
       //if(c==(2*n)/2){
       //     printf("YES\n");
       // }
       // else {
         //   printf("NO\n");
      //  }
   }



    return 0;
}

//The answer is 'yes' if and only if there are exactly n odd numbers.
//
