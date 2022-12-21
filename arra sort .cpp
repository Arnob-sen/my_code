#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t,c=0;
   unsigned long long sum=0;
    cin>>t;

    while(t--){
        int n,x;

        cin>>n>>x;

        int ara[n];

        for(int i=0;i<n;i++){
            cin>>ara[i];

        }
        sort(ara,ara+n,greater<int>());

       // for(int i=0;i<n;i++)cout<<ara[i]<<" ";

       // cout<<endl;
       sum=ara[0];
       for(int i=1;i<=n;i++){
        if(sum/i<x){
            cout<<i-1<<endl;
            c=1;
            break;
        }
        else sum+=ara[i];
       }
        if(c==0)cout<<n<<endl;
        sum=0,c=0;
    }





    return 0;
}
