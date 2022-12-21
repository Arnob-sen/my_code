#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()

{
    int k,size;
    cin>>size;

    vector<int>v;

    for(int i=0;i<size;i++){

        cin>>k;
        v.push_back(k);
    }
    sort (v.begin(),v.end(),greater<int>());
    for(auto element:v){
    cout<<element<<" ";

    }
  // both are correct;

    /*/for(int i=0;i<size;i++){
            cout<<v[i]<<" ";

        }
        /*/





    return 0;
}
