#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0,i;
    cin>>t;
    while(t--){
        int ara[10];
        for( i=0;i<3;i++)cin>>ara[i];
        sort(ara,ara+3);

      //  for(int i=0;i<2;i++){
            int d=ara[1]-ara[0];
            int l=ara[2]-ara[1];
       // }
        if(d==1&&l==1&&ara[0]%3==2 && ara[1]%3==0&&ara[2]%3==1)cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

      //  cout<<d<<l<<endl;;
  //      cout<<ara[0]<<ara[1]<<ara[2];

    }


    return 0;

}
