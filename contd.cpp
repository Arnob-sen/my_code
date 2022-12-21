#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
    long long arr[100];
    for(long long i=0;i<3;i++)cin>>arr[i];

    sort(arr,arr+3);

    long long sum=arr[0]+arr[1];
    if(sum>=arr[2])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


    }


    return 0;
}
