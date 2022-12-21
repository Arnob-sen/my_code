#include<bits/stdc++.h>

using namespace std;


int main()

{
    int t;
    cin>>t;

    while (t--){
        long long x,n;

        cin>>x>>n;
        long long d=x+1;
        long long c=x-1;
        if(n%4==0)cout<<x<<endl;

       else  if(n%4==1 && x%2==0)cout<<x-n<<endl;

       else  if(n%4==1 && x%2!=0)cout<<x+n<<endl;
       else  if(n%4==2&& x%2!=0)cout<<x-1<<endl;

      else   if(n%4==2&&x%2==0)cout<<x+1<<endl;
        else if(n%4==3 && x%2!=0)cout<<c-n<<endl;

       else  if(n%4==3 && x%2==0)cout<<d+n<<endl;




            }




    return 0;
}
