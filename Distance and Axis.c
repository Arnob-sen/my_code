#include<stdio.h>
#include<math.h>
int main()

{
    int t;
    scanf("%d",&t);

    while(t--){

        int n,k;

        scanf("%d%d",&n,&k);



         if(k>=n)printf("%d\n",(k-n));
        else   if( (k%2)==(n%2) )printf("0\n");





       else printf("1\n");

     /*/   else{
            int d=abs(n-k);
            if(d>=n)printf("%d\n",n);
            else printf("%d\n",d);

        }
        /*/
    }



    return 0;
}
