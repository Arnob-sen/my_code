#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()

{
    ll n,m,c=1;
    cin>>n>>m;
    ll a=n;
    ll b=m;
    while(a!=0&&b!=0){
        if(a>=2*b){
            a%=2*b,c++;


        }
        else if(b>=2*a ){
                b%=2*a,c++;

        }
        else
            break;

    }
    cout<<a<<" "<<b<<endl;

    }
