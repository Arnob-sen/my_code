#include<bits/stdc++.h>
using namespace std;


int main()

{
    long long t,n,a,b,c=0,d,e,f,i,j;
    cin>>t;
    while(t--){
        cin>>n;


        long long arr[n+1];
        for(i=0;i<n;i++)cin>>arr[i];


        if(n==1)cout<<n-1<<endl;

        else {
                long long x=0;
            d=0;
        for(i=0;i<n;i++){
                bool found=false;
            for(j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                        c++;
                        c+=d;
      //  cout<<c<<" "<<d<<endl;

                        found=true;;
                        d=0;
                        break;


                }

            }
            if(found==false){
                    d++;
          //  cout<<d<<endl;
            }

           // if(c==0)i++;
        }
        cout<<c<<endl;
        c=0,d=0,x=0;
        }
    }
    return 0;
}
/*/5
4
3 1 4 3
5
1 1 1 1 1
1
1
6
6 5 4 3 2 1
7
1 2 1 7 1 2 1
/*/
