#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<n<<endl;
        ll arr[n+1];
        for(ll i=1;i<=n;i++){
            arr[i]=i;
            cout<<arr[i]<<" ";

        }
        cout<<endl;
        for(ll i=2;i<=n;i++){
            swap(arr[i],arr[i-1]);
            for(ll j=1;j<=n;j++)cout<<arr[j]<<" ";

            cout<<endl;
        }
    }



    return 0;
}
