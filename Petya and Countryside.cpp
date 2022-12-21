#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,c=0,max1=0,x=0,max2=0;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
            int m=arr[i];

       for(int j=i+1;j<n;j++){


            if(m>=arr[j]){
                c++;

                m=arr[j];


            }
            else break;

        }


                        int d=arr[i];
         for(int k=i-1;k>=0;k--){


            if(d>=arr[k]){
                    x++;

                    d=arr[k];


            }
            else break;
        }



        if(x+c>max2)max2=x+c;


        x=0;
        c=0;
        //cout<<max2<<endl;



    }




    cout<<max2+1;

    return 0;
    }




