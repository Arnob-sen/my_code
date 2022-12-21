#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n, ub =-1,lb=-1;
    cin>>n;

    int ara[n];

    for(int i=0;i<n;i++){
        cin>>ara[i];
    }
    int x,l;
    cin>>l>>x;

    int suru=0,suru1=0;
    int sesh=n-1,sesh1=n-1;
    while(suru<=sesh){
        int mid=(suru+sesh)/2;


        if(ara[mid]==x){
            ub=mid+1;
          //  suru=mid+1;
          break;
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

        cout<<lb<<" "<<ub<<endl;







    return 0;
}
