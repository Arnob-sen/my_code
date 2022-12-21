#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main ()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(n%2==0 && m%2==0)cout<<"Tonya"<<endl;
        else if(n%2!=0 && m%2!=0)cout<<"Tonya"<<endl;

        else cout<<"Burenka"<<endl;
    }




    return 0;
}
