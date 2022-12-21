#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
     ll n,k,b,s;
     ll arr[n+1];

    cin>>n>>k>>b>>s;
   // if(s<k*b||s>n*(k-1)+k*b)cout<<"-1"<<endl;
   /*/ else{
        arr[n-1]=k*b;
        s-=k*b;
        for(ll i=n-1;i>=0&&s>0;i--){
          arr[i]+=min(k-1,s);
          s-=min(k-1,s);

        }
        for(ll i=0;i<n;i++)cout<<arr[i]<<" ";

        cout<<endl;
    }
    /*/
    }
}
