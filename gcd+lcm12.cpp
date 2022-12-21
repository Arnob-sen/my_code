
#include<bits/stdc++.h>
#include<numeric>

using namespace std;

int main()
{
    long long t,a,b,c,d,hcf,temp;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(max(a,b)%min(a,b)==0)cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
}
