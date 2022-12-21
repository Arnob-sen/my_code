#include<bits/stdc++.h>
using namespace std;
int fact(int m)
{
    if(m==1)return 1;
    else return(m*fact(m-1));
}

int main()
{
    int n;
    cin>>n;
    long long result =fact(n);
    cout<<result;
}
