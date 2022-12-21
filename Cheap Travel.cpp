#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,m,a,b;
    long long sum1;
    cin>>n>>m>>a>>b;
    if(n%m==0)  sum1=((n/m)*b);
    if(n%m!=0)
     sum1=((n/m)*b)+b;


    long long sum2=(n/m)*b+(n%m)*a;
    long long sum=n*a;
    if(n<=m && b<=n*a)cout<<b<<endl;

   else if(sum1<=sum && sum1<=sum2)
    cout<<sum1<<endl;
    else if(sum2<=sum && sum2<sum1)
    cout<<sum2<<endl;

   else  if(sum<sum1 && sum<sum2)
    cout<<sum<<endl;

        //cout<<sum<<sum1<<sum2;


    return 0;
}
//cout << std::max(a,b,comp) << "\n";
