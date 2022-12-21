#include<bits/stdc++.h>

using namespace std;
int main()

{

    int n,d;
    cin>>n>>d;
    int x=n<<d;//left shift.ekta kore 0 barabe.jotobr blbe.double hbe(d bar left shift korar mane 2^d dara gun)
    cout<<x<<endl;
    int y=n>>d;//right shift.jotobr blbe.toto kore kombe.ordek hobe
    cout<<y<<endl;
    int a,b;
    cin>>a>>b;
    a=a^b;
    b=a^b;   //swaping processs
    a=a^b;
    cout<<a<<" "<<b<<endl;
    int e,f;
    cin>>e>>f;
    int m=e&(f-1);//e mod f r result.kintu f re obossoi 2^n hoita hbe
    cout<<m<<endl;


}
