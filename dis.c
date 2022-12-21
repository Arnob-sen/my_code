#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
       if(k>=n) printf("%d\n",(k-n));
      // else if(k==n) printf("%d\n",0);
       else if((k%2)==(n%2)) printf("%d\n",0);
       else printf("%d\n",1);
    }
    return 0;

}
