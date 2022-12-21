#include<bits/stdc++.h>
using namespace std;

int main()

{
    int k,sum=0;
    cin>>k;
    cout<<k;
    while(k>0){
        sum+=(k%10);

        k=k/10;
 }

    cout<<10-sum;


    return 0;
}
