#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    vector<int>v;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n,greater<int>());

    cout<<arr[0]<<" ";
  //  for(int i=0;i<n;i++)cout<<arr[i]<<" ";

    for(int i=1;i<n;i++){
        if(arr[0]%arr[i]!=0 || arr[i-1]==arr[i])v.push_back(arr[i]);
    }
    sort(v.rbegin(),v.rend());




    cout<<v[0];



    return 0;
}
