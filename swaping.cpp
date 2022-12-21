#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a,b,n;
    cin>>a>>b;

    swap(a,b);
    int m=min(a,b);
    int d=max(a,b);

    cout<<a<<" "<<b<<" "<<m<<" "<<d<<endl;

    cin>>n;

    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];


    }
    for(int i=0;i<n/2;i++){

    swap(ara[i],ara[n-i-1]);

    }
    for(int i=0;i<n;i++){

        cout<<ara[i]<<" ";
    }



    return 0;
}
