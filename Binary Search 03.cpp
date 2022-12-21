#include<bits/stdc++.h>

using namespace std;

int main()

{

    int t,c=0,count=0,lb=-1;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        long long sum=0;
        int ara[n],ara2[n];
        for(int i=0;i<n;i++)cin>>ara[i];

        sort(ara,ara+n,greater<int>());
      //  vector<long long>v;
       // vector<int>::iterator lower;
        for(int i=0;i<n;i++){
            sum+=ara[i];
            ara2[i]=sum;
        }
      // for(int i=0;i<n;i++)cout<<ara2[i];



        while(q--){
            int k;
            cin>>k;

          // lower=lower_bound(v.begin(), v.end(),k);
          lb=lower_bound(ara2,ara2+n,k)-ara2;

          if(lb>=n)lb=-2;



            cout<<lb+1<<endl;

            k=0;

        }
    }



    return 0;
}
