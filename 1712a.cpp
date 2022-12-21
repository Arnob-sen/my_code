#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,c=0;
        cin>>n>>k;
        ll arr[n+1];
        for(ll i=0;i<n;i++){
                cin>>arr[i];

        }
        for(ll i=0;i<k;i++){
            if(arr[i]>k)c++;
        }
    cout<<c<<endl;

    c=0;
    }



    return 0;
}
