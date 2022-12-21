#include<bits/stdc++.h>
using namespace std;

int main ()

{
    int a,b;
    cin>>a>>b;

    int x=a&b; //and operation
    cout<<x<<endl;
    int y=a|b; // or operation
    cout<<y<<endl;
    int z=~a;//not operation
    cout<<z<<endl;

    int p=a<<b; // b ta 0 lagbe last a (left shift)
    int q=a>>b; // b ta sonkha kombe last thke (right shift)

    cout<<p<<" "<<q<<endl;






}
