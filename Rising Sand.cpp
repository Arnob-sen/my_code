#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;

        cin>>n>>k;

        int ara[n];
        for(int i=0;i<n;i++)cin>>ara[i];

        if(k==1 && n%2==0)cout<<n/2-1<<endl;

        else if(k==1 && n%2!=0)cout<<n/2<<endl;

        else {
            for(int i=0;i<n-2;i++){
                if(ara[i]+ara[i+2]<ara[i+1]){

                        c++;
                   // cout<<ara[i]+ara[i+2]<<" "<<ara[i+1]<<endl;
                }
            }
            cout<<c<<endl;

        }
        c=0;
    }
}
