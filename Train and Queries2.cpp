#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        map<int,int>first,last;
        cin>>n>>k;
        int x;
        for(int i=1;i<=n;i++){
                cin>>x;
                if(!first[x])first[x]=i;
                last[x]=i;
        }
        while(k--){
            int a,b;
            cin>>a>>b;
            if(first[a]&&last[b]&&first[a]<=last[b])cout<<"YES"<<endl;
            else cout<<"NO"<<endl;        }

    }


    return 0;
}
