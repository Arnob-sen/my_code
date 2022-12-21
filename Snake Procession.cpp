#include<bits/stdc++.h>


using namespace std;
int main(){

    int tc, n, t;
    string s;

    cin>>tc;
    while(tc--){
        cin>>n;
        cin>>s;
        bool _h=1, _t=0, v=1;
        int h=0, t=0;
        for(int i=0; i<n; i++){
            if( s[i]=='.' )continue;
            else if( s[i]=='H' && _h==1 )_t=1, _h=0, h++;//ektare off kore araktare on .ekn jodi arakta h ashe direct v=0 condition a jabe
            else if( s[i]=='T' && _t==1 )_t=0, _h=1, t++;//same as before
        else v=0;
        }
        if(v==0 || h!=t)cout<<"Invalid";
        else cout<<"Valid";
        cout<<endl;
    }
    return 0;
}
