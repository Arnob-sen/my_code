#include <stdio.h>

int main(void) {

   int t,n,sum,ara[200000];


   scanf("%d",&t);


   for(int i=0; i<t; i++)
   {
       sum = 0;


       scanf("%d",&n);

       scanf("%d",&ara[0]);

       if(n==1)


        printf("Yes\n");

       else
       {
       for(int j=1; j<n; j++)
       {
           scanf("%d",&ara[j]);
           sum = sum + ara[j] - ara[j-1];

       }
       if(sum<=(n+1))

       printf("Yes\n");


       else printf("No\n");
       }

   }


	return 0;
}


