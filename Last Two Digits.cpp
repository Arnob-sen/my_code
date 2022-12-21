#include<bits/stdc++.h>

using namespace std;

int main ()

{

    long long n;
    cin>>n;

    if(n%100==0)cout<<"00"<<endl;
    else if(n%100<10)cout<<"0"<<n%100<<endl;

    else cout<<n%100<<endl;


}
