#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int ara[n];

    for(int i=0;i<n;i++)cin>>ara[i];

    int q;
    cin>>q;
    while(q--){

        int d;
        cin>>d;
        int ub=upper_bound(ara,ara+n,d)-ara;
        int lb=lower_bound(ara,ara+n,d)-ara-1;

       cout<<ub<<" "<<lb<<endl;
       if(lb>=0)cout<<ara[lb]<<" ";
       else cout<<"X"<<" ";
        if(ub<n)cout<<ara[ub]<<endl;

        else cout<<"X"<<endl;


    }





    return 0;
}
