#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll q,n;
    cin>>q;
    while(q--){
        cin>>n;
        ll arr[n+1];
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];

        }
        if(sum%n==0)cout<<sum/n<<endl;
        else cout<<sum/n+1<<endl;

    }
}
