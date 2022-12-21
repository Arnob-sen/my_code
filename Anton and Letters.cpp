#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
        string str;
        int c=0,count=0;
        gets(str);
        int len=str.size();

        for(int i=1;i<len;i+=3){


            for(int j=i+3;j<len;j+=3){
                if(str[i]==str[j])c++;


            }
            count++;

        }
        cout<<c<<endl<<count;



    return 0;
}
//{b, a, b, a}
