#include<bits/stdc++.h>
#include<numeric>

using namespace std;

int main()
{
    long long t,a,b,c,d,hcf,temp;
    cin>>t;
    while(t--){
        cin>>a>>b;
        c=__gcd(a,b);

    hcf=a;
    temp=b;
    while(hcf!=temp){
        if(hcf<temp){
            hcf+=a;
        }
        else
        temp+=b;
    }
    d=+temp;
   // cout<<d<<endl;
        if((c+d)==(a+b))cout<<"true"<<endl;
        else cout<<"false"<<endl;
        c=0,d=0,a=0,b=0;
    }



    return 0;
}
int n;
vector<bool> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= n; i++) {
    if (is_prime[i] && (long long)i * i <= n) {
        for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
    }
}
