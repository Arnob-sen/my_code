#include<bits/stdc++.h>
using namespace std;

int main()

{
    int a;
    cin>>a;

   int 	x=a&1;
    cout<<x<<endl;// 0 return korle even 1 return korla odd

    int y=a&(a-1);//0 return korla a 2^n dia prokash kora jy
        cout<<y<<endl;

        int z=a&(a+1);//0 return korle 2^n -1 dia prokash kora jy

        cout<<z<<endl;
    return 0;
}
