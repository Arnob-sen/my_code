
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x=0;
        cin>>x;
        int a,b,c=0;
int        arr[4];
        for(int i=0;i<3;i++){
            cin>>arr[i];


        }
        for(int i=0;i<2;i++){if(arr[x-1]==0||arr[x-1]==x){
            c=1;
            break;
        }


         else {
                x=arr[x-1];
               // c=0;
                continue;

    }
        }
        if(c==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }




}
