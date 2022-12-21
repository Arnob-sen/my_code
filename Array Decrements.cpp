#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c=0,d=0;
        cin>>n;
        int ara[n],ara1[n];
        for(int i=0;i<n;i++){
            cin>>ara[i];


        }
          for(int i=0;i<n;i++)  cin>>ara1[i];
          for(int i=0;i<n;i++)
        {
            if((ara[i]-ara1[i])>d) d=(ara[i]-ara1[i]);
        }
        for(int i=0;i<n;i++){
            if(ara[i]-ara1[i]<d&& ara1[i]!=0){
                    c=1;
            break;
            }
        }
        if(c==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
            }




    return 0;
}
