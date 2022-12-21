#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    int ara[n];
    long long sum=0;

    for(int i=0;i<n;i++)cin>>ara[i];

    int t;
    cin>>t;
    while(t--){
        int k,d;
        cin>>k>>d;
        for(int i=k;i<=d;i++)sum+=ara[i];



        cout<<sum<<endl;
        sum=0;
    }




    return 0;
}
/*/
3
1 4 1
3
1 1
1 2
0 2
/*/
