#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()

{
    int n,c=0;
    cin>>n;

    for(int i=2;i*i<=n;i++){
        if(n%i==0)c++;
    }
    if(c==0)cout<<"prime"<<endl;
    else cout<<"not"<<c<<endl;



    return 0;

}
