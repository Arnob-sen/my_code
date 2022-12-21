#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    int ara[n];

    for(int i=0;i<n;i++){

        cin>>ara[i];

    }
    sort(ara,ara+n);

    int start=0;
    int end=n-1;
int    mid=(start+end)/2;
    int x;
    cin>>x;
    while(1){
        if(ara[mid]==x){cout<<x<<" "<<mid+1;
        break;
        }

        else if(ara[mid]<x){
            //start=mid+1;
            mid=mid+1;



        }
        else
           // end=mid-1;
           // mid=(start+end)/2;
           mid=mid-1;
               if(mid>end || mid<start){cout<<"NOT FOUND"<<endl;
               break;
               }


    }
//    if(mid>end || mid<start)cout<<"NOT FOUND"<<endl;

    return 0;
}
