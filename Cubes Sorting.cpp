#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, temp=0,d=0,t,k;

    cin>>t;

    while(t--){

    cin>>n;
    //k=(n*(n-1)/2)-1;
    long long ara[n];

    for(int i=0;i<n;i++)cin>>ara[i];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

        if(ara[i]>ara[j]){
         d++;
         temp=ara[i];
         ara[i]=ara[j];
         ara[j]=temp;
        }
    }
    }
    cout<<d<<endl;
    if(d<=k)
    cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
    d=0;
    }


    return 0;
}
