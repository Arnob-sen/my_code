#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--){
        long long a,b,x,y,n,c=0,d=0,e=0,m=0;
        cin>>a>>b>>x>>y>>n;

        d=min(max(a-n,x),max(b-n,y));
        e=max(a+b-n,x+y)-d;
        cout<<d*e<<endl;


            }


    return 0;
}
