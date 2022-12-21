#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--){
        long long n,d,q;
        cin>>n>>d;
        while(n--){
            cin>>q;
            if(q>=10*d)cout<<"YES"<<endl;//jodi number ta d r 10 gun r cheye boro hoya jay tkn oitak anyhow prokash kora jabe,karon ekta number 70-79 r moddee thkbe(jkn d=7) ,r oita r sata 7 related any number jugh kore q pawa jabei

            else{
            bool found=0;

            while(q>0){
                if(q%10==d){
                    found=1;
                    break;
                }
                q-=d;
            }

            if(found==1)cout<<"YES"<<endl;

            else cout<<"NO"<<endl;
        }
        }


    }
    //



    return  0;
}
