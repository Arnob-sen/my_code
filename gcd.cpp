
#include<bits/stdc++.h>

using namespace std;


int main()

{
    int a,b;
    cin>>a>>b;

  //;  int c=a%b;
    int x;
    int big=max(a,b);
    int small=min(a,b);

    while(big%small!=0){

        x=big%small;
                cout<<big<<"="<<small<<"*"<<big/small<<"+"<<x<<endl;
        big=small;
        small=x;

    }

    cout<<big<<"="<<small<<"*"<<big/small<<"+"<<big%small<<endl;
       //

    cout<<x<<endl;


    return 0;
}
