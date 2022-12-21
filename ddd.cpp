#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
        char str[10000];
        set<char>s;
        int c=0,count=0;
        gets(str);
        //int len=str.size();
        int len=strlen(str);

        for(int i=1;i<len;i+=3){
            s.insert(str[i]);
            //cout<<i<<endl;
            c++;
        }
        if(len==2)cout<<"0"<<endl;
        else
        cout<<s.size()<<endl;
       // cout<<c<<endl;

    //   cout<<len<<endl;
}
