#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,l,r,i,d,c;
        vector<int>v;

        cin>>n>>l>>r;

        for(int i=1;i<=n;i++){
            if(l%i==0)v.push_back(l);

            else {
                d=(l/i)+1;
                c=d*i;
                if(c<=r)v.push_back(c);
            }
        }
        if(v.size()==n){
            cout<<"YES"<<endl;
            for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

            cout<<endl;
        }
        else cout<<"NO"<<endl;

    v.clear();

    }
    return 0;
}
