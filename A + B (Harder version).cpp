#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    long long sum=0;
    cin>>t;
    while(t--){
            int ara[100];
        for(int i=0;i<7;i++){
                cin>>ara[i];
        sum+=ara[i];

        }
        cout<<sum<<endl;
        sum=0;
    }


    return 0;
}
