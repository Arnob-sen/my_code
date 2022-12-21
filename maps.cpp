#include<bits/stdc++.h>

using namespace std;

int main()

{
    map<int,int>m;


    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
       // v.push_back(i);
        cin>>ara[i];
    }
    for(int i=0;i<n;i++){
        m[ara[i]]++;
    }
    for(auto ii:m){
        cout<<ii.first<<" "<<ii.second<<endl;
    }



    return 0;
}
