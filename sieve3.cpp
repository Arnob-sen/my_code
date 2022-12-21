#include<bits/stdc++.h>
using namespace std;

void sieve (int n)
{
    bool prime[n];
     memset(prime, true, sizeof(prime));

     for(int i=4;i<=n;i+=2){
        prime[i]==false;
     }
     for(int i=3;i*i<=n;i+=2){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=2){
            prime[j]=false;
            }
        }
     }
     for(int i=2;i<=n;i++){
        if(prime[i])cout<<i<<" ";
     }
}

int main()
{

    int n=30;
    sieve(n);
    return 0;
}
