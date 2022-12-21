#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t,i;
    cin>>t;
   int  count=0;

    while(t--){
        int n;
        cin>>n;

        int ara[n];
        for( i=0;i<n;i++)cin>>ara[i];
        sort(ara,ara+n);

        for(int i=0;i<n;i++){
            //if(ara[i]==ara[i+1])
             //continue;
             while (i < n - 1 && ara[i] == ara[i + 1]){
         i++;
      }
               count++;
        }
        if((n%2==0 && count%2==0) || (n%2!=0 && count%2!=0))
        cout<<count<<endl;
        else cout<<count-1<<endl;
        count=0;
    }



    return 0;
}
