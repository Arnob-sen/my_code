#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main ()
{
    ll t;
    cin>>t;
    while(t--){
     ll n,k,c=0;
     cin>>n>>k;
     ll arr[n+1];
     for(ll i=1;i<=n;i++)arr[i]=i;

     for(ll i=1;i<=n;i+=2){
        if(((arr[i]+k)*arr[i+1])%4==0)continue;

        else {
            swap(arr[i],arr[i+1]);


                if(((arr[i]+k)*arr[i+1])%4==0)continue;
                else {cout<<"NO"<<endl;
                c=1;
                break;
                }
            }

        }

     if(c!=1){
     cout<<"YES"<<endl;
     for(ll i=1;i<=n;i+=2)cout<<arr[i]<<" "<<arr[i+1]<<endl;
    }
    }
}
