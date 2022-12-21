#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,c=0;
    cin>>n>>x;
     vector<int>v;
     vector<int>v2;
    while(n--){
        int a,b;
        cin>>a>>b;

        v.push_back(max(min(x,max(a,b)),min(a,b)));
        v2.push_back(max(a,b));

    }
    sort(v2.begin(), v2.end());
    for(int i=0;i<v.size()-1;i++){

  // cout<<v[i]<<" ";
     // cout<<v2[i];
     //if(v[0]<=v[1]){

        if((v[i]>v[i+1] && v[i]<=x) || (v[i]>v2[0] && v[i]<=x) || ( v[i+1]>v2[0] && v[i]<=x)) {
            c=1;
           // cout<<v2[0];
 //  break;
        }

   // else if(v[0]>)
    }
    if(c==1)cout<<"-1"<<endl;
        else {
            if(v2[v2.size()-1]<x)cout<<x-v2[v2.size()-1]<<endl;
            else cout<<v[v.size()-1]-x<<endl;
        }

  //  cout<<v[v.size()-1];


    return 0;
}
