#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<long long> arr(n);
        if(s<k*b||s>n*(k-1)+k*b)cout<<"-1"<<endl;
   else{
        arr[n-1]=k*b;
        s-=k*b;
        for(long long i=n-1;i>=0&&s>0;i--){ // s=0 oile ei loop e dukbe na.auto baki element 0 hoya jabe arr er

          arr[i]+=min(k-1,s);
          s-=min(k-1,s);

        }
        for(long long i=0;i<n;i++)cout<<arr[i]<<" ";

        cout<<endl;
    }


    }

}
