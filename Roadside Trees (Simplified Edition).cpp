#include<bits/stdc++.h>
using namespace std;

int main()

{
  int n;
  cin>>n;
  int arr[n+1];
  long long sum=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  //  sum+=arr[i]+1;
  }
  for(int i=0;i<n-1;i++)sum+=(abs(arr[i]-arr[i+1])+2);


  cout<<sum+arr[0]+1<<endl;




    return 0;
}
