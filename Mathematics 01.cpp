#include<bits/stdc++.h>

using namespace std;

int main()

{
  long long n,i,c=0;

  cin>>n;
  long long ara[n];

  for(i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    long long small=ara[0];

    for(int i=0;i<n;i++){
        if(ara[i]%small!=0)c=1;
    }
    if(c==1)cout<<"-1"<<endl;

    else cout<<small<<endl;

    return 0;
}
