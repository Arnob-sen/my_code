#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        int arr[n+1];
        vector<int>v;
        for(int i=0;i<n;i++)
                cin>>arr[i];

    for(int i=0;i<n-1;i++){
        if(abs(arr[i]-arr[i+1])!=0)v.push_back(abs(arr[i]-arr[i+1]));
    }
    if(v.size()==0)cout<<"-1"<<endl;




    else{
            sort(v.begin(),v.end());
    int x=v[0];
            for(int i=1;i<v.size();i++){
                x=__gcd(x,v[i]);
            }
            cout<<x<<"\n";

    }

    v.clear();
    c=0;

    }



}



