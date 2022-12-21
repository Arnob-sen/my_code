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
        string str;
        cin>>str;
        vector<ll>v;
        for(ll i=0;i<n;i++){
            if(str[i]=='0')v.push_back(i+1);

        }
        ll d=v.size();
        if(d==0){
                cout<<"0\n";

        }
        else {
        bool arr[n+1]={0};
        ll ans=0;
        for(ll i=0;i<d;i++){
            ll c=1;
            while(binary_search(v.begin(),v.end(),c*v[i])){
                if(!arr[c*v[i]]){
                    ans+=v[i];
                }
                arr[c*v[i]]=true;
                c++;

            }
        }
        cout<<ans<<endl;
    }
    }
}

