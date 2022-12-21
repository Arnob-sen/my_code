#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   long long sum=0;
   int d=n-1;
    if(n%2!=0)
    {
        for(int i=1;i<=(n-1)/2;i++){
            sum+=2*(d*i);
            d--;
           // cout<<sum<<endl;
        }
        cout<<sum+n<<endl;

    }
    else {
        for(int i=1;i<=(n-1)/2;i++){
            sum+=2*(d*i);
            d--;
        }
        cout<<sum+n+((n/2)*(n/2))<<endl;
    }
}
