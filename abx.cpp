#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(n>m || (!(n&1)&&(m&1)))cout<<"NO"<<endl;

        else if(n==m){
            cout<<"YES"<<endl;
            for(ll i=1;i<=n;i++)cout<<"1"<<" ";

            cout<<endl;
        }
        else if(n%1){
            cout<<"YES"<<endl;
            for(ll i=1;i<n;i++)cout<<"1"<<" ";

            cout<<n-m+1<<endl;

        }
        else {
            cout<<"YES"<<endl;
            for(ll i=1;i<=n-2;i++)cout<<"1"<<" ";

            cout<<(n-m+2)/2<<" "<<(n-m+2)<<endl;


        }
    }
}
