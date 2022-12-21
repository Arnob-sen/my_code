#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long num=1;
        long long i=1;
        while(1){
            num+=(pow(2,i));
            i++;
            if(n%num==0)break;
        }
        cout<<n/num<<endl;
        num=1;
        i=1;
    }


    return 0;
}
