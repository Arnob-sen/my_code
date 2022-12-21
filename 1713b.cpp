#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

typedef long long ll;
int main()
{

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
       ll arr[n+1],max=0,index=0,c=0;
       vector<ll>v1,v2;
       for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
       }
       for(ll i=0;i<index;i++){
        if(arr[i]>arr[i+1]){
        c=1;
        break;
       }
       }
       if(c!=1){
        for(ll i=index;i<n-1;i++){
            if(arr[i]<arr[i+1]){
            c=1;
           // cout<<arr[i]<<" "<<arr[i+1]<<endl;
            break;
        }
       }
       }
      // cout<<max<<index<<endl;
       if(c==0){cout<<"YES"<<endl;
       continue;
       }
       else  cout<<"NO"<<endl;
       continue;
       c=0;
    }



}
