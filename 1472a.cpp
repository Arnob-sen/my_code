#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ]long long a,b,n,sum=0;
        cin>>a>>b>>n;
        //long long d=a/2,e=b/2;
        while(a%2==0){
            a/=2;
            sum+=2;

        }
        while(b%2==0){
            b/=2;
            sum+=2;
        }

        if(sum>=n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }







    }
