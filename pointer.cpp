#include<bits/stdc++.h>

using namespace std;
main()
{

    int v=3;
    int *pv ;
    pv=&v;
    cout<<*pv<<v;
    *pv=0;
    cout<<*pv<<v;

}
