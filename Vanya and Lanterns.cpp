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
     float m=diff/2.;
     x=max(ara[0]-0,l-ara[n-1]);
     float e=x;
    // cout<<x<<endl;
        if(m>=e)printf("%.10f\n",m);
        else printf("%.10f\n",e);

   //  float e=x;
    // double d=double(x/2);


    return 0;
}
