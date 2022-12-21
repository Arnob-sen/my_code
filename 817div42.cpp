#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,c=0,d=0;
        cin>>n;
        string str,str2;
        cin>>str>>str2;
        for(int i=0;i<n;i++){
            if(str[i]==str2[i]||str[i]=='B'&&str2[i]=='G'|| str[i]=='G'&&str2[i]=='B')c=1;

            else {
                c=0;
                break;
            }

        }
        if(c==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        c=0;
    }



    return 0;
}

