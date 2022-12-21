#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t,d,c;
    long long sum=0;

    cin>>t;
    while(t--){
        int a,b,c;

        cin>>a>>b>>c;
        sum=(a+b+c)/3;
       // d=min(a,b);
      //  c=min(sum,d);

       // cout<<c<endl;
       if(a<=b && a<=sum)cout<<a<<endl;

       else if(b<a && b<=sum)cout<<b<<endl;
       else cout<<sum<<endl;
               sum=0;
    }



    return 0;
}
