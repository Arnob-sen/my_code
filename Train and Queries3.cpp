#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    map<int,vector<int> >pos;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        for(int i=1;i<=n;i++){
            int u;
            cin>>u;
            pos[u].push_back(i);
           //  cout<<pos(i)<<" ";
        }
        for(int i=0;i<pos.size();i++){
             cout<<pos(i)<<" ";
        }
    }


    return 0;
}
