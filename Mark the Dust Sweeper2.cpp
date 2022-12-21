#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,c=0;
        cin>>n;
      long long  int l=n-1;
long long        int ara[n+1];
        for(long long int i=0;i<n;i++)cin>>ara[i];

        for(long long int i=0;i<n-1;i++){
                if(ara[i]!=0){l=i;//sob ager zero re avoide
                break;
                }

        }
       // cout<<l<<endl;
        for(long long int i=l;i<n-1;i++){
            if(ara[i]==0)c=c+1;//er por joto gula 0 ase tadr jnno 1 kore barailm

            else if(ara[i]!=0) c=c+ara[i];//ar jara non zero tadr value add krlm
        }
        cout<<c<<endl;
        c=0;
    }



    return 0;
}
