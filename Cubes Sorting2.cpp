#include<bits/stdc++.h>


using namespace std;

int main()

{
    long long n,t,i,c=0;

    cin>>t;

    while(t--){
        cin>>n;
        long long ara[n];

        for(i=0;i<n;i++)cin>>ara[i];

        for(i=0;i<n-1;i++){
            if(ara[i]<=ara[i+1]){
                    c=1;
              //  break;
            }
        }

    if(c==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    c=0;
    }


    return 0;
}
