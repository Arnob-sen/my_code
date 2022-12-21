#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0;

    cin>>t;
    while(t--){
            long long n,k;
            cin>>n>>k;
            long long i=1;
            //for(int i=1;;i++){
            while(i<k){
                if(i%n==0)continue;
                else c++;

                i++;
                if(c==k){
                    cout<<i<<endl;

                        break;

            }
            cout<<c<<endl;
            c=0;



    }
    }



    return 0;
}
