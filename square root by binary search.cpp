#include<bits/stdc++.h>

using namespace std;

int main()

{
    double n;
    cin>>n;

   double suru=0,mid;
   double sesh=n;
    while(sesh-suru>0.000000001){
        mid=(suru+sesh)/2;


     if(mid*mid>n)sesh=mid;

    else if(mid*mid<n)suru=mid;


    }
    cout<<mid<<endl;




    return 0;
}
