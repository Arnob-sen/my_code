#include<stdio.h>
int main()
{
    int t, i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);

       long long ara[n];
       for(int j=0;j<n;j++)
        {
            scanf("%d",ara[j]);
                        }
                        if(n==1 && ara[0]==1){

                    printf("YES\n");
                    continue;

                }
                        if(n==1 && ara[0]!=1)
                        {


                            printf("NO\n");
                            continue;
                        }
                        if(ara[0]-ara[1]>1){
                            printf("NO\n");
                        }
                        else{
                            printf("YES\n");
                        }





        }







    return 0;
}

