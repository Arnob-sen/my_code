#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        cout<<v[n-1]-v[0]<<endl;
    }



    return 0;
}
