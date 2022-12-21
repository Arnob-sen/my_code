#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string str;
        cin>>str;
        vector<ll>v1,v2;
        ll d=0;
        for(ll i=0;i<n;i++){
            if(str[i]=='R')
            d+=(n-i-1);
            else d+=i;
            if(i<(n-i-1)&&str[i]=='L')v1.push_back(n-1-i-i);//i-i
            else if(i>(n-1-i)&&str[i]=='R')v1.push_back(i+i+1-n);
        }
        sort(v1.rbegin(),v1.rend());
        ll ans=0;
        for(ll i=0;i<v1.size();i++){
            ans+=v1[i];
            v2.push_back(d+ans);
        }
         for(ll i=v1.size();i<n;i++)v2.push_back(ans+d);
         for(ll i=0;i<v2.size();i++)cout<<v2[i]<<" ";

            cout<<endl;
        }

}
