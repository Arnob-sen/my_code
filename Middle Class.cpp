#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t=0,c=0,k=0,sum=0;

    vector<int>v;
    cin>>t;

    while(t--){
            int n,x;
        cin>>n>>x;

        for(int i=0;i<n;i++){

            cin>>k;
            v.push_back(k);
        }
       // sort (v.begin(),v.end(),greater<int>());
     sort (v.begin(),v.end(),greater<int>());
        //for(auto element:v)cout<<element<<" ";
    if(v[0]<x)cout<<0<<endl;

    else{
    sum=v[0];
       // printf("%d\n",sum);
       for(int i=1;i<=n;i++){
        if((sum/i)<x){
                cout<<i-1<<endl;
                //printf("%d\n",i-1);
        break;
       }
       else {
        sum=sum+v[i];
        c++;
       }

    }
   if(c==n) cout<<c<<endl;
    c=0,sum=0;
    }
    }




    return 0;










}
//sort (v.begin(),v.end(),greater<int>());
