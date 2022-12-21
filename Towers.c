#include<stdio.h>
int main()

{


    int n,c=1,max;
    scanf("%d",&n);


    int ara[n];

    for(int i=0;i<n;i++){


        scanf("%d",&ara[i]);
    }
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){

        if(ara[i]==ara[j]){
        c++;


        }




            }
            max=c;
             // printf("%d",max);


            if(c<max){max=c;}

              printf("%d",max);

              c=1;
              continue;


    }
  //  printf("%d",max);


}





