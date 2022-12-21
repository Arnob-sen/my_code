
#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,t;
    long long red=0,blue=0,countR=0,countB=0;
    cin>>t;

    while(t--){
        cin>>n;
        int ara[n];

        for(int i=0;i<n;i++){
            cin >>ara[i];
        }

        sort(ara,ara+n);
    long long sum1=0,sum2=0;
    if(n%2==0){
    for(int i=0;i<n/2;i++)sum1+=ara[i];
    for(int i=n/2+1;i<n;i++)sum2+=ara[i];
    }
    else
    {
        for(int i=0;i<n/2+1;i++)sum1+=ara[i];
        for(int i=n/2+1;i<n;i++)sum2+=ara[i];


    }

    if(sum2>sum1)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



sum1=0,sum2=0;
    }




    return 0;
}

