#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;

    cin>>t;
    while(t--){
       long long n,sum=0,sum2=0,d,c;
       cin>>n;


       if((n/2)%2!=0)cout<<"NO"<<endl;

       else {
        cout<<"YES"<<endl;
        for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            sum2+=i;
        }
        for(int j=1;j<=n-2;j+=2){
                cout<<j<<" ";
        sum+=j;
        }
          cout<<sum2-sum<<endl;
  //cout<<sum<<sum2<<endl;
       }


    }



    return 0;
}
