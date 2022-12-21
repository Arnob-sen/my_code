#include<bits/stdc++.h>
using namespace std;
bool prime[100];

void sieve(int n)

{
    prime[1]=true;

    for(int i=4;i<=n;i+=2){
        prime[i]=false;
    }
    for(int i=3;i*i<=n;i+=2){
        if(prime[i]==false){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=true;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==false)cout<<i<<" ";
    }

}
int main()
{
    int n=30;
    sieve(n);

}
