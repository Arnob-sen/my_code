#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n+1];
    for(ll i=1;i<=n;i++)cin>>arr[i];

    long long prefix1[n+4],prefix2[n+4];
    prefix1[1]=0;
    prefix2[n]=0;
    for(ll i=2;i<=n;i++){
        if(arr[i]<arr[i-1])prefix1[i]=prefix1[i-1]+(arr[i-1]-arr[i]);
        else prefix1[i]=prefix1[i-1];

    }
     for(ll i=n-1;i>0;i--){
        if(arr[i]<arr[i+1])prefix2[i]=prefix2[i+1]+(arr[i+1]-arr[i]);
        else prefix2[i]=prefix2[i+1];

    }
   // for(ll i=1;i<=n;i++)cout<<prefix1[i]<<" ";
  // cout<<endl;
   // for(ll i=1;i<=n;i++)cout<<prefix2[i]<<" ";
   // cout<<endl;


    while(m--){
        ll s,t,sum=0;
        cin>>s>>t;
        if(s<t){

        cout<<abs(prefix1[s]-prefix1[t])<<endl;
    }
    else

    {

        cout<<abs(prefix2[s]-prefix2[t])<<endl;
    }
    }






    return 0;
}
