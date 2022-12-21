#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,m,c=0;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++)cin>>ara[i];
    cin>>m;
    int ara2[m];
    for(int i=0;i<m;i++)cin>>ara2[i];
    sort(ara,ara+n);
    sort(ara2,ara2+m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(ara[i]-ara2[j])<=1){
                c++;
                ara2[j]=1000; // ei value ta jeno ar use na hoy
                break;
            }
        }
    }
    cout<<c<<endl;


    return 0;
}
