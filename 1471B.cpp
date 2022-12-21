#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--){
    long long n,sum=0,x;
    cin>>n>>x;
    long long arr[n+1],ara[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
         ara[i]=arr[i];
         sum+=arr[i];


    }
    bool flag=true;
    while(flag){ //loop ta toto smy gurbe jotokkn array r  element x dia vag  jay.
    for(int i=0;i<n;i++){
        if(ara[i]%x!=0){
            flag=0;
            break;
        }
        sum+=arr[i];
        ara[i]/=x; //array r value gula update korlm,new element oilo 2nd array.x dia vag koira
    }
    }
    cout<<sum<<endl;
    }

    return 0;
}
