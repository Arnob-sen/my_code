#include<bits/stdc++.h>

using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--){
        long long n,c=0,d,i;
        cin>>n;
        long long ara[n+1];
        for(i=0;i<n;i++)cin>>ara[i];

        for(i=1;i<n;i++){
                if(ara[i]%ara[0]!=0){
                    c=1;
                    break;
                }


            }

        if(c==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        }

        //cout<<c<<endl;




    return 0;

}
