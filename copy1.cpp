#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x,R=2000,L=0;
cin>>n>>x;
while(n--)
    {
        int a,b;

    cin>>a>>b;
//cout<<endl;
    if(a>b) swap(a,b);
    L=max(a,L);
    R=min(b,R);
    //cout<<L<<" "<<R<<endl;;
}
//cout<<endl;

//cout<<(L>R?-1:m>=L&&m<=R?0:L>m?L-m:m-R)<<endl;
if(L>R)cout<<"-1"<<endl;
else if(x>=L && x<=R)cout<<"0"<<endl;
else if(L>x)cout<<L-x<<endl;
else cout<<x-R<<endl;
}

