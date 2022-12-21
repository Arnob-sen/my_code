#include <bits/stdc++.h>
using namespace std;

void seive(int n)
{

    bool prime[n+1];
     memset(prime, true, sizeof(prime));

     for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(j=i*i;j<=n;j+=i){
                prime[i]==false;
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
    seive(n);

    return 0;

}
