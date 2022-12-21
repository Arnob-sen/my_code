#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,c=0;
    cin>>t;
    while(t--){
        string str;
        set<char>s;

        cin>>str;
        for(int i=0;i<str.size();i++){

            s.insert(str[i]);
            if(s.size()==3){
                c++;
                s.clear();

            }
        }
      //  if(s.size()!=0)c++;

        cout<<c<<endl;
        c=0;
    }

    return 0;
}
