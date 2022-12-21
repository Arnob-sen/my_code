
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
        char str[10000];
        int c=0,count=0;
        gets(str);
        //int len=str.size();
        int len=strlen(str);

        for(int i=1;i<len;i+=3){


            for(int j=i+3;j<len;j+=3){
                if(str[i]==str[j]){c++;
                break;

                }


            }
            count++;

        }
        if(count==1 && len==2)cout<<count-1<<endl;
        else
        cout<<(count-c)<<endl;
       //cout<<count<<" "<<c<<endl;

       c=0,count=0;


    return 0;
}
