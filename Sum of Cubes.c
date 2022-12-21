
#include<stdio.h>
#include<math.h>

int main()
{

    unsigned long long t;
   // cin>>t;
        scanf("%lld",&t);
    while(t--){
        unsigned long long n,d,c=0,j,i;

       // cin>>n;
       scanf("%lld",&n);
        d=cbrt(n);


        for( i=1;i<=d;i++){
            for( j=1;j<=d;j++){
                if((i*i*i)+(j*j*j)==n){
                    c=1;
                   // cout<<"YES"<<endl;
                    break;
                }
                if(c==1)break;

            }
        }
            if(c==0)//cout<<"NO"<<endl;
                printf("NO\n");
            else if(c==1)//cout<<"YES"<<endl;
            printf("YES\n");
            c=0,d=0;
        }



    return 0;
}
