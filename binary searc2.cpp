#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,lb=-1,ub=-1;
    cin>>n;

    int ara[n];

    for(int i=0;i<n;i++){

        cin>>ara[i];

    }
    //int query,d;
    int l;
    cin>>l;

    sort(ara,ara+n);

    int sesh=n-1;
    int suru=0;

    while(suru<=sesh){
        int mid=(suru+sesh)/2;

        if(l==ara[mid]){

            lb=mid;
       // break;
       sesh=mid-1;//onk gula thkla sbr 1st ta print
    //  start=mid+1;//onk gula thkla sbar sesh r index print
        }
        else if(l>ara[mid]){
                suru=mid+1;



        }
        else if(l<ara[mid]){
            sesh=mid-1;
        }
    }
    if(lb==-1)cout<<suru<<endl;
    else
    cout<<lb<<endl;


       cout<<suru<<" "<<sesh<<endl;



    return 0;
}
