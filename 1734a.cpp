#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll t ;
    cin>>t;
    while(t--){
        ll n,c=1000000000,min=0;
        cin>>n;
        ll arr[n+1];
        for(ll i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        for(ll i=0;i<n-2;i++){
                min=arr[i+2]-arr[i];
                if(min<c){c=min;
                min=0;
                }
        }

        cout<<c<<endl;
    }
}
