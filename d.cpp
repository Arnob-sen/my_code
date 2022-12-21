#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    vector <int>v(n);

    for(int i=0;i<n;i++)cin>>v[i];

    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1])continue;

        c++;
    }
    cout<<c<<endl;
    return 0;
}
