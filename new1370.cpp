
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,c=0;
        cin>>n;
        vector<ll>v1,v2;
        ll arr[100000];
        for(ll i=0;i<2*n;i++)cin>>arr[i];
        for(ll i=0;i<2*n;i++){
                //cout<<arr[i]<<endl;

            for(ll j=i+1;j<2*n;j++){
                    if((arr[i]%2==0 && arr[j]%2==0 && arr[i]>=0 && arr[j]>=0) || (arr[i]%2!=0 && arr[j]%2!=0 && arr[i]>=0 && arr[j]>=0)){
                       // v1.push_back(arr[i]+arr[j]);
                       // v2.push_back(i+1);
                       // v2.push_back(j+1);
                       cout<<i+1<<" "<<j+1<<endl;
      // cout<<arr[i]<<" "<<arr[j]<<endl;
                        c++;
                        arr[j]=-1;
                        arr[i]=-1;
                        break;                    }

            }
            //if(c==n-1)break;

                if(c==n-1)break;
        }
      //  for(ll i=0;i<n-1;i+=1)cout<<v2[i]<<" "<<v2[i+1]<<endl;;

    }



    return 0;
}
