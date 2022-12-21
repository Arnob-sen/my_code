#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void prime_sieve(int *p,int n){

    for(ll i=3;i<=1000;i+=2)p[i]=1;

    for(ll i=3;i<=1000;i+=2){
        if(p[i]==1){
            for(ll j=i*i;j<=1000;j+=i)p[j]=0;


        }
    }
    p[2]=1;
    p[1]=p[0]=0;
     for(ll i=0;i<=n;i++){
        if(p[i]==1)cout<<i<<" ";
    }

}


int main()
{

    ll n;
    cin>>n;
    int p[1000]={0};
    prime_sieve(p,n);

}

