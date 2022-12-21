#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int ara[n];

    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    long long d=ara[n-1]-ara[0]+1;
    cout<<d-n<<endl;
}
