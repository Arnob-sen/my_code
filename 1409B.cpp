#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b,x,y,n,s,t,u,v,w;
        cin>>a>>b>>x>>y>>n;
            s=b-y;
            t=a-x;
            if(x==1 && (n>=a || (a-n)==1)){
                    if(n>=a)
                    cout<<(x*(b-(n-a)))<<endl;
                       else if(a-n==1)cout<<x*b<<endl;

            }
          else  if(y==1 && (n>=b || (b-n)==1) ){
                if(n>=b)
                    cout<<(y*(a-(n-b)))<<endl;
          else if((b-n)==1)cout<<y*a<<endl;

            }

        else if(a>=b){
            if(s<=n){
                b=y;
                n=n-s;
                if(n>=t)

                    a=x;
                    else a=abs(a-n);

            }
            else b=abs(b-n);

            cout<<a*b<<endl;
        }
        else {
                 if(t<=n){
                a=x;
                n=n-t;
                if(n>=s)

                    b=y;
                    else b=abs(b-n);

            }
            else a=abs(a-n);

            cout<<a*b<<endl;

        }


    }



    return 0;
}
