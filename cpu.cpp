#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h, h0(0);
    cin>>n;
    int time = n + n - 1;
    while (n--)
    {
        cin>>h;
        time += abs(h - h0);
        h0 = h;
    }
    cout<<time<<endl;
    return 0;
}
