#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long sum=0;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ara[n];
        for(int i=0;i<n;i++){
            cin>>ara[i];
            sum+=ara[i];
        }
        if(sum<m)cout<<"0"<<endl;
        else cout<<sum-m<<endl;
        sum=0;
    }


    return 0;
}
