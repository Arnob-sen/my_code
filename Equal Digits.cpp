#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,str;
    cin>>s;
    int d=s[0]-'0';
   int m,c=0,f=0;
    //cout<<m<<d;
   //


    for(int i=1;i<s.size();i++){
       //
       m=s[i]-'0';
       if(m<d){
            c=1;
        break;
       }
       else if(d<m){f=1;
       break;
    }


    }
    if(m>d){
        for(int i=0;i<s.size();i++)cout<<d+1;
    }
    else if(d>=m)
        for(int i=0;i<s.size();i++)cout<<d;
    //cout<<str;



    return 0;
}
