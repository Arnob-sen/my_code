
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       if(n%2==0){
        for(ll i=1;i<=n;i++){
            if(i%2==0)cout<<i-1<<" ";
            else cout<<i+1<<" ";
        }
        cout<<endl;
       }
       else {
        cout<<"1"<<" ";
        for(ll i=2;i<=n;i++){
            if(i%2==0)cout<<i+1<<" ";
            else cout<<i-1<<" ";
        }
        cout<<endl;
       }

    }

}
