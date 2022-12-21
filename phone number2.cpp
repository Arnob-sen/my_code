
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,k,i=0,j,temp;
    cin>>d;
    string arr;
    cin>>arr;
     n=arr.size();
    if(n%2!=0){
    for(int i=0;i<n-3;i+=2){
        for(int j=i;j<=i+1;j++){cout<<arr[j];
        }

        cout<<"-";
    }
    for(int i=n-3;i<n;i++)cout<<arr[i];
    }
    else {
         for(int i=0;i<n-2;i+=2){
        for(int j=i;j<=i+1;j++){cout<<arr[j];
        }

        cout<<"-";
    }
    for(int i=n-2;i<n;i++)cout<<arr[i];
    //for(int i=n-3;i<n;i++)cout<<arr[i];
    }


    return 0;

}
