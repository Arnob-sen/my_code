#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0,d=0,m=0,n=0;
    cin>>t;
    while(t--){
        int n,even1=0,odd1=0,even2=0,odd2=0;
        cin>>n;
        int v[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i%2==0){
                if(v[i]%2==0)even1=1;
                else odd1=1;
            }
            else {
                if(v[i]%2==0)even2=1;
                else odd2=1;
            }
        }
            if(even1==1&&odd1==1)cout<<"NO"<<endl; // eksata 2 ta 1 mane even index gular sob gulay even r odd eksata ase.same for condition 2
            else if(even2==1&&odd2==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

    }

    return 0;
}
