#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        int ara[n];
        for(int i=0;i <n;i++)cin>>ara[i];

        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=ara[i];j>=1;){
                v.push_back(j);
                //ara[j]=ara[j]/2;
                j=j/2;
            }
        }
       // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
      set<int>s;
       for(auto x:v){
        s.insert(x);
       }
       auto it=s.lower_bound(n);
       if (it != s.end()) {

        cout << (*it) << endl;
        if(*it==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
     else cout<<"NO"<<endl;

      for(auto x:s)cout<<x<<" ";
    //cout<<d;


        cout<<endl;
    }





    return 0;
}
