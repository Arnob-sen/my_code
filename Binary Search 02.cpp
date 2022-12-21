#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long t,d;

    cin>>t;

    while(t--){
        long long n,s;
        cin>>n>>s;

        if(n%2==0)d=n/2;
        else d=n/2+1;

        cout<<s/(n-d+1)<<endl;

    }


  return 0;
}
