#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k,c=0,d,m=0;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0;i<n;i++)cin>>arr[i];


        if(arr[k-1]==1){
            d=k;

        }
        else{
            if(c==0){
                for(int i=k;i<n;i++){
                    if(arr[i]==1){
                            d=i+1;
                    m=1;
                    break;
                }
            }
            }
            if(m==0){
                for(int i=0;i<k-1;i++){
                    if(arr[i]==1){
                        d=i+1;
                        c=1;
                        break;
                    }
                }
            }
        }





    cout<<d;


    return 0;

    }
