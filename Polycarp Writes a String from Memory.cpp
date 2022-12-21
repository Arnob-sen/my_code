#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        set<char>s;

        for(int i=0;i<str.size();i++){
            s.insert(str[i]);
            if(s.size()==4){
                c++;
                s.clear();
                s.insert(str[i]);// jodi 4 ta distinct char r pay taila last ta raika baki gula dlt kore dibe
            }
        }
        if(s.size()!=0){
            c++; //jodi sob ses korar por o set a kisu bki thke tkn arakbr c++
        }
        cout<<c<<endl;
        c=0;
    }


    return 0;
}
