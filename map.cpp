#include<bits/stdc++.h>
using namespace std;
int main()

{
    map<int ,int>mp;//key r value 1 pair

    mp[0]=4;//0 key r value 4
    mp[1]=7;
    mp[9]=10;
    cout<<mp[1]<<endl;//key dia value ta excess kora
    cout<<mp.count(0)<<endl;// jdi 1 print kore tar mane value ta ase.0 print korla nai

    for(auto &x:mp){
        cout<<x.first<<" "<<x.second<<endl;//1st a key 2nd a value
    }



    return 0;
}
