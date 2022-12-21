#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,size;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        long long ara[n],sum=0,c=0;
        for(int i=0;i<n;i++)cin>>ara[i];
        sort(ara,ara+n,greater<int>());
        sum=ara[0];
        for(int i=1;i<n;i++){
            if(sum/i<k){cout<<i-1<<endl;
            c=1;
            break;
            }
            else sum+=ara[i];
            //size=i;
        }
        if(c==0)cout<<n<<endl;
        size=0,sum=0;
    }
}
