#include<bits/stdc++.h>

#include<iostream>

using namespace std;

int main()

{

    vector<int>v,t;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    t=v;//copy
    for(int i=0;i<t.size();i++)cout<<t[i]<<endl;

}
