
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()

{
    ll n,m,c=0;
    cin>>n>>m;
    ll a=n;
    ll b=m;



    while((a>=2*b || b>=2*a) && (a!=0 && b!=0)){
        if(a>=2*b){
                if(a%b==0){
                    if((a/b)%2==0){
                            cout<<"0"<<" "<<b<<endl;
                            c=1;
                            break;

                    }
                    else if((a/b)%2!=0) {
                        cout<<b<<" "<<b<<endl;
                        c=1;
                        break;

                    }
                }
           else if(a/2*b>2)
                a=a-(a/2*b-1)*b;

            else a=a-2*b;
        }
        else if(b>=a*2){
                if(b%a==0){
                    if((b/a)%2==0){cout<<a<<" "<<"0"<<endl;
                    c=1;
                    break;
                    }
                    else if((b/a)%2!=0){
                        cout<<a<<" "<<a<<endl;
                        c=1;
                        break;
                    }
                }
                if(b/2*a>2)
                b=b-(b/2*a-1)*a;
            else b=b-2*a;
        }


            }
            if(c!=1)
              cout<<a<<" "<<b;






}

