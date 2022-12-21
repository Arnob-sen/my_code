#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--){
            int a,b,c;
        long long sum=0;
        cin>>a>>b>>c;

        sum=a+b+c;
        if(sum%9==0){
          int  x=min({a,b,c});

            if(sum/9<=x)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
        sum=0;
    }



    return 0;
}
