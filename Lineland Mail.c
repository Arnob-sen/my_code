#include<stdio.h>

int main()

{
    int n,min,max;

    scanf("%d",&n);

    int ara[n];

    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    for(int i=0;i<n;i++){


                  if(i==0){
                         min=ara[1]-ara[0];
                            max=ara[n-1]-ara[0];

                    }

                  else  if(i==n-1){
                            min=(ara[n-1]-ara[n-2]);
                            max=ara[n-1]-ara[0];

                    }


            else{

                        max=(ara[n-1]-ara[i]);
                        int max2=(ara[i]-ara[0]);
                        if(max2>max)max=max2;

                        min=(ara[i]-ara[i-1]);
                        int min2=(ara[i+1]-ara[i]);
                        if(min2<min)min=min2;
            }





            printf("%d %d\n",min,max);



    }



    return 0;
}
/*/if(t == 0){

            max = ara[n-1] - ara[0];

            min = ara[1] - ara[0];
        }
        /*/
