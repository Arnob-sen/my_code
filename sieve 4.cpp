#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    bool prime[n];

    memset(prime,true,sizeof(prime));
        vector<int>v;

    for(int i=4;i<=n;i+=2){
        prime[i]=false;
    }
    for(int i=3;i*i<=n;i+=2){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=2*i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i])v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        //if(i==n)
        cout<<v[i]<<endl;
      //  break;
    }


}
int main()
{

    int n;
    cin>>n;
    sieve(n);
    return 0;
}
