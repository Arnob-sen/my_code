#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        char str1,str2[1000];
        str1="YES";
        cin>>str2;
        strupr(str2);
        int d=strcmp(str1,str2);
        if(d==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
