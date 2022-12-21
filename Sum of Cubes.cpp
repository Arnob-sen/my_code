#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    unsigned long long t;
    cin>>t;

    while(t--){
        unsigned long long n,d,c=0,j,i,a,b;

        cin>>n;
        d=cbrt(n);


        for( i=1;i<=d;i++){
            a=n-i*i*i;

            b=cbrt(a); // 8 dila a r man 0 ashe .tai b>0 ei condition

                if(b*b*b==a &&b>0){  // root korla integer aschaa kina tar proman like cbrt of 17 =2,bt 2*2*2=8 abr cbrt 8 =2,bt 2*2*2=8,

                    c=1;
                   // cout<<"YES"<<endl;
                    break;
                }
                }




            if(c==0)cout<<"NO"<<endl;
            else if(c==1)cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<endl;
            c=0,d=0,a=0,b=0;
        }



    return 0;
}

