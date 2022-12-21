#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t,cs=1;
    cin>>t;

    while(t--){
            int n,q;

            cin>>n>>q;

            int ara[n];

            for(int i=0;i<n;i++)cin>>ara[i];

            cout<<"Case"<<":"<<cs<<endl;
            cs++;
            while(q--){
                int l,r;
                cin>>l>>r;

                int ub=upper_bound(ara,ara+n,r)-ara;
                int lb=lower_bound(ara,ara+n,l)-ara;
                cout<<ub-lb<<endl;
                cout<<ub<<" "<<lb<<endl;
            }


    }



    return 0;
}
