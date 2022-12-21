#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--){
        long long a,b,c=0;

        cin>>a>>b;

       int d=(a+b)/3;

       if(a<b && a<d)cout<<a<<endl;

       else if(b<a && b<d)cout<<b<<endl;
       else cout<<d<<endl;
    }




    return 0;
}
