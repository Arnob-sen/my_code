#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    if(a>=b){
        cout<<b<<" "<<(a-b)/2<<endl;
    }
    else cout<<a<<" "<<(b-a)/2<<endl;
}
