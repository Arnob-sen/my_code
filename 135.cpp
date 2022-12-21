#include<bits/stdc++.h>
using namespace std;
long long arr[50];
int main()
{

    int t,n,max=0,ans;
    cin>>t;
    while(t--){
         max=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if(arr[i]>max){
                max=arr[i];
                ans=i;
            }
        }
        cout<<ans<<endl;

    }
}
