#include<bits/stdc++.h>

using namespace std;


int main()

{
    int t,cs=1;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"Case"<<" "<<cs<<":"<<" ";
    cs++;

    int d=__gcd(a,b);

    if(c%d==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }


    return 0;
}
