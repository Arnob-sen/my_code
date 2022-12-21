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
     for(ll i=0;i<n;i++){
        for(ll j=0;j<i+1;j++){
            if(j==0||j==i)cout<<"1 ";
            else cout<<"0 ";

        }
        cout<<"\n";
             }
    }
}
