#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
            ll n;
            cin>>n;
            string str[3][n];
            map<string,int>mp;
            for(ll i=0;i<3;i++)
            {
                for(ll j=0;j<n;j++){
                    cin>>str[i][j];
                    mp[str[i][j]]++;
                }
            }
            ll a=0,b=0,c=0,count;
            for(ll i=0;i<3;i++){
                for(ll j=0;j<n;j++){
                    string str2=str[i][j];
                    count =mp[str[i][j]];
                    if(count==1){
                        if(!i)a+=3;
                        else if(i==1)b+=3;
                        else c+=3;

                    }
                    else if(count==2){
                            if(!i)a++;
                        else if(i==1)b++;
                        else c++;

                    }

                }
            }
            cout<<a<<" "<<b<<" "<<c<<endl;

    }



    return 0;
}
