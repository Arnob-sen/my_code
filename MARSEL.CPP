#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,d=1;
    cin>>t;
    while(t--){
        int n;
        long long sum, max,a,b;
        cin>>n;
        sum=0;max=0;

        for(int i=0;i<n-1;i++){
                cin>>a>>b;
            sum+=a-b;
            if(sum>max)max=sum;
            //d++;
        }
        cout<<"Case"<<" "<<d<<":"<<" "<<max<<endl;
        d++;
    }
}
