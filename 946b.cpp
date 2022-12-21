
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()

{
    ll n,m;
    cin>>n>>m;
    ll a=n;
    ll b=m;

cout<<a/b<<" "<<a%b<<endl;





    while((a>=2*b || b>=2*a) && (a!=0 && b!=0)){
        if(a>=2*b){
               // if(a%b==0 && a/b%2==0){
                        a=0;
              //  break;
                       // cout<<"0"<<" "<<b<<endl;

                }
            else if(a/b>2)
                a=a-(a/b-1)*b;

            else a=a-2*b;
        }
        else if(b>=a*2){
                 //if(b%a==0 && b/a%2==0){
                     //   b=0;
                       // cout<<a<<" "<<"0"<<endl;
               // break ;
                }

               else  if(b/a>2)
                b=b-(b/a-1)*a;
            else b=b-2*a;
        }


            }
            cout<<a<<" "<<b<<endl;





//1000000000000001 500000000000000
}
