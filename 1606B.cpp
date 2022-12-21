#include<bits/stdc++.h>

using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--){
        unsigned long long n,k,i,count =0,d=1,m=0;
        cin>>n>>k;
        while(d<k){
            d*=2;
            count++;
        }
        if(d<=n)
        m=n-d;


        if(m%k==0)
                cout<<count+m/k<<endl;

                else cout<<count+m/k+1<<endl;
               // cout<<m<<" "<<d<<endl;
    }



    return 0;
}
