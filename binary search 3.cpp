#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    int a[n],mid;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    int shuru = 0, shesh = n-1;
    int x;
    cin>>x;
    while(shuru<=shesh){
         mid = (shuru + shesh) / 2;
//        debug(mid, a[mid]);
        if(a[mid] > x)shesh = mid-1;
        else if(a[mid]<x)shuru = mid+1;
        else {
            cout<<mid<<endl;

            break;
           //mid=shesh-1;
        }
    }
   // cout<<mid<<endl;



    return 0;
}
