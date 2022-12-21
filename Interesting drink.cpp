#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    int q;
    cin>>q;
    while(q--){
            int m;
    cin>>m;
        int d=upper_bound(ara,ara+n,m)-ara;
        cout<<d<<endl;
    }



    return 0;
}
