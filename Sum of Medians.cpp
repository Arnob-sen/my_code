#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    long long sum=0;
    cin>>t;
    while(t--){
            int n,k;
            cin>>n>>k;
            int ara[n*k];
            for(int i=0;i<n*k;i++)cin>>ara[i];

            int d;
            if(n%2==0)d=n/2;
            else d=n/2+1;

            for(int i=d-1;i<n*k;i=i+n){sum+=ara[i];
            cout<<sum<<" ";
            }
            cout<<sum<<endl;
          //  cout<<d;
            sum=0;
    }
}
