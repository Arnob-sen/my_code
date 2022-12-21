#include<bits/stdc++.h>

using namespace std;

int main()
{
    int u=3;
    int v;
    int *pu;
    int *pv;
    pu=&u;
    v=*pu;

    pv=&v;

    cout<<u<<" "<<&u<<" "<<pu<<" "<<*pu<<endl;
    cout<<v<<&v<<pv<<*pv;


    return 0;
}
