#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t,c=0;
    cin>>t;

    while(t--){
        long l,r;
        cin>>l>>r;

        for(int i=l;i<=r;i++){
            if(i%10==2||i%10==3||i%10==9)c++;
        }
        cout<<c<<endl;
        c=0;
    }


    return 0;
}
