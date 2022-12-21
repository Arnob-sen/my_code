#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,c=0,x;
        cin>>n>>x;
        int ara[2*n];
        for(int i=0;i<2*n;i++)cin>>ara[i];

        sort(ara,ara+2*n);

        for(int i=0;i<n;i++){
                if(ara[n+i]-ara[i]>=x){
                        c++;
                       // cout<<ara[n+i]<<ara[i]<<c<<endl;
                       //cout<<c<<endl;
                        continue;
                }


                }




        if(c==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

       // cout<<c<<endl;
      //  c=0;

    }
}
