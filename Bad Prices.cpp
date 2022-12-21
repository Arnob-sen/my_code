#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t,c=0;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int ara[n];

        for(int i=0;i<n;i++){
            cin>>ara[i];

        }
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
                if(ara[i]>ara[j]){
                    c++;
                break;
                }
            }
       }
        cout<<c<<endl;
        c=0;
    }


    return 0;
}
