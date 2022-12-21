#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;

    cin>>t;
    while(t--){
        long long a,b,c,d=0,cs=1;
        cin>>a>>b>>c;
        cout<<"Case"<<" "<<cs<<":"<<" ";
        cs++;

        if(c%a==0 || c%b==0 || c%(a+b)==0 || c%(abs(a-b))==0)cout<<"Yes"<<endl;

        else if(c<a || c<b)cout<<"No"<<endl;

        else {
            while(c>a){
                c=c-a;
                if(c%b==0){
                        d=1;
                break;
                }
            }
            if(d==1)cout<<"Yes"<<endl;

            else cout<<"No"<<endl;
        }
    }



    return 0;
}
