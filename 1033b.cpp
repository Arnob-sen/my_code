#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--){
        ll a,b,c=0;
        cin>>a>>b;
        ll d=a+b;
        for(int i=2;i<=sqrt(d);i++){
            if(d%i==0){
                    c=1;
            break;
            }
        }
        if(c==1)cout<<"NO"<<endl;
        else if(c==0 && (a-b==1))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
