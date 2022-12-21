#include<bits/stdc++.h>
using namespace std;

int main()

{

    int t;
    cin>>t;
    while(t--){
            int c=0,d=0;
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++){
            if(str[i]=='a')c++;
            else if(str[i]=='b')d++;


        }
        if(c==d)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        //cout<<c<<d;
        c=0,d=0;
    }


    return 0;
}
