#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    long long sum=0;
    cin>>n;

    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];

    sort(ara,ara+n,greater<int>());


    for(int i=0;i<n;i+=2)
    sum+=(ara[i]-ara[i+1]);

    cout<<sum<<endl;

    return 0;
}
