#include<stdio.h>
#include<math.h>



int main()

{
    int t;
    int n;
    long long sum;
    scanf("%d",&t);
    while(t--){


        scanf("%d",&n);


        if(n==1)printf("-1\n");

        else{
                printf("2");
        for(int i=2;i<=n;i++)printf("3");
        }
        printf("\n");
    }



    return 0;
}
