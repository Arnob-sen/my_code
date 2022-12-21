#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,sum=0;
        cin>>n;
        ll arr[n+1];
        for(ll i=0;i<n;i++)cin>>arr[i];

        sort(arr,arr+n);
        sum=arr[n-1]+arr[n-2]-arr[0]-arr[1];

        cout<<sum<<endl;

    }



    return 0;
}
