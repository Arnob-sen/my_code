
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a ,b,c;
        cin>>a>>b>>c ;
          ll d=pow(10,c-1);
         ll x=d,y=d;
         while(x<pow(10,a-1))x*=2;
         while(y<pow(10,b-1))y*=3;

         cout<<x<<" "<<y<<endl;

       //  cout<<__gcd(x,y)<<endl;
       if(a%2==0 ||a%2!=0)cout<<"YES";



    }



}
