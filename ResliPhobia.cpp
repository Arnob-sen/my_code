#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;

    while(t--){
        long long n,k;
            cin>>n>>k;
            long long ara[n],sum1=0,sum2=0,count1=0,count2=0,ara1[n],ara2[n];

            for(long long i=0;i<n;i++)cin>>ara[i];
            for(long long i=0;i<n;i++){
                if(ara[i]%2==0)ara1[i]=ara[i];
                else if(ara[i]%2!=0)ara2[i]=ara[i];
            }
            sort(ara1,ara1+n,greater<int>());
            sort(ara2,ara2+n,greater<int>());




            for(long long i=0;i<k;i++){
               // if(count1>=k)continue;

                    sum1+=ara1[i];
                    sum2+=ara2[i];

                }

            cout<<sum1+sum2<<endl;
            sum1=0,sum2=0,count1=0,count2=0;
    }



    return 0;
}
