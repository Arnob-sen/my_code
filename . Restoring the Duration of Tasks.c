#include<stdio.h>

int main()

{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){


        //long long n;
        int n;
        scanf("%d",&n);



        int ara[n],ara2[n];
        for(int i=0;i<n;i++){


            scanf("%d",&ara[i]);
        }
        for(int i=0;i<n;i++){

                scanf("%d",&ara2[i]);
        }
        printf("%d ",ara2[0]-ara[0]);

        for(int i=1;i<n;i++){

        	if(ara[i]>ara2[i-1])
      	{
      		printf("%d ",ara2[i]-ara[i]) ;
      	}
      	else
      	{
      		printf("%d ",ara2[i]-ara2[i-1]) ;
      	}
      }


           printf("\n");
        }




    return 0;
}
