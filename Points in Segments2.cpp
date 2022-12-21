#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=1,ub=-1,lb=-1;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;

        int ara[n];

        for(int i=0 ; i<n; i++)cin>>ara[i];
        cout<<"Case"<<" "<<cs<<":"<<endl;
        cs++;

        while(q--){
              int suru=0,suru1=0;
    int sesh=n-1,sesh1=n-1;
                int x,l;
                cin>>l>>x;
                 while(suru<=sesh){
        int mid=(suru+sesh)/2;


        if(ara[mid]==x){
            ub=mid+1;
           suru=mid+1;

        }
        else if(ara[mid]>x){
            sesh=mid-1;

        }
        else{
            suru=mid+1;
        }

        }
         while(suru1<=sesh1){
                int mid1=(suru1+sesh1)/2;

                if(ara[mid1]==l){
                        lb=mid1;
                break;
                }

                else if(ara[mid1]>l)sesh1=mid1-1;

                else if(ara[mid1]<l)suru1=mid1+1;
            }
        if(lb==-1)lb=suru1;
        if(ub==-1)ub=suru;

        cout<<ub-lb<<endl;


        suru=0,suru1=0;
        sesh=n-1,sesh1=n-1;
        lb=-1,ub=-1;



        }


    }


    return 0;
}
