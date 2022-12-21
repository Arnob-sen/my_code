#include<bits/stdc++.h>
using namespace std;

int main()


{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long m=n;
        int count = 0;
   while(n != 0) {
      n= n / 10;
      count++;
   }
   unsigned long long d=pow(10,(count-1));
   cout<<m-d<<endl;
    }
    return 0;
}
