#include<bits/stdc++.h>

using namespace std;
int main()

{
    int n,l;
    cin>>n>>l;
    int ara[n+1];
    for(int i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
     int diff =0;
     for(int i=0;i<n-1;i++)
     {
         if(ara[i+1]-ara[i]>diff)diff=ara[i+1]-ara[i];
     }
     int x;
     x=2*max(ara[0],l-ara[n-1]);

     x=max(diff,x);
    // double d=double(x/2);
        printf("%.10f\n",x/2.);

    return 0;
}
