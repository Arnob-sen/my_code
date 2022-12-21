#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,point1=0,zero1=0,point2=0,one2=0,c=0,d=0,e=0;
    cin>>n;
    int ara[n],ara2[n];

    for(int i=0;i<n;i++){
        cin>>ara[i]>>ara2[i];
        if(ara[i]==0 && ara2[i]==0)c++;
         else if(ara2[i]==1)d++;

        else if(ara[i]==1 && ara2[i]==1)e++;

        if(ara[i]==0){
                point1++;
                point2++;
        }
    }


        if(c==n || d==n || e==n)cout<<"-1"<<endl;

   // cout<<c<<d<<e;




    return 0;
}
