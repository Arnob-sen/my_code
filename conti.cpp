#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long m;
    cin>>n;
    string s;
    cin>>s;
    int d=s.size();
    m=n;
    if(n%d!=0){
    while(n>=d){
             n=n-d;
            m=m*n;
      //  cout<<n<<" "<<m<<endl;

    }
    cout<<m<<endl;
    }
    else if(n%d==0)
        {
    while(n>d){
             n=n-d;
            m=m*n;
      //  cout<<n<<" "<<m<<endl;

    }
    cout<<m<<endl;
    }


    return 0;
}
