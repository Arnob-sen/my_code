#include<bits/stdc++.h>

using namespace std;

int main()

{
    int a,b,c=0,d=0;

    cin>>a>>b;
    int x=a;
   int y=b;
     while(a*b>0)
   {
        if(a>b){

            b+=1;
            a-=2;


            }
            else{
                b-=2;
                a+=1;


            }
            c++;

    }

     if(x<2&& y<2)c=0;
            cout<<c<<endl;








    return 0;
}
