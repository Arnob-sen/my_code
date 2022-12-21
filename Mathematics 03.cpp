#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long t,n,i,sum=0;

    cin>>t;

    while(t--){
        cin>>n;
        if(n==1)cout<<"0"<<endl;
        else{
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                if(i==n/i)sum+=i;
                else sum+=(i+n/i);
            }
        }
        cout<<sum+1<<endl;
        sum=0;
        }
    }





    return 0;
}
