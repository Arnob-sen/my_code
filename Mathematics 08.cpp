#include<bits/stdc++.h>

using namespace std;

int main()

{

    long long n,k,d,left;

    while(scanf("%lld%lld",&n,&k)==2){
        d=n+n/k;

        left=(n/k)+(n%k);

        while(left>=k){
            d+=left/k;
            left=(left/k)+(left%k);
        }
        cout<<d<<endl;
    }
}
