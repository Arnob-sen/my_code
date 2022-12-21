#include<bits/stdc++.h>

using namespace std;
int main()

{
    long long t,c=0,cs=1;
    cin>>t;

    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<"Case"<<" "<<cs<<":"<<" ";
        cs++;
        if(c%a==0 || c%b==0 || c%(a+b)==0 || c%(abs(a-b))==0)cout<<"Yes"<<endl;

        else{
        for(long long i=0;i*a<=c;i++){
            if((c-(i*a))%b==0){
               // cout<<"YES"<<endl;
                c=1;
                break;
            }
        }
        if(c==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    }



    return 0;
}
