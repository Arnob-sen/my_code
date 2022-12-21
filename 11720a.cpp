
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{

    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll m=a*d;
        ll n=b*c;
        if(m==n)cout<<"0"<<endl;
        else if(n!=0 && m%n==0 || m!=0 && n%m==0)cout<<"1"<<endl;
        else cout<<"2"<<endl;

    }
}
