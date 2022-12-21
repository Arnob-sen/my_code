#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll d=max(n,m);
        ll f=min(n,m);
        if(n==1 && m==1)cout<<"0"<<endl;
        else

        cout<<d+2*(f-1)<<endl;
    }

    return 0;
}
