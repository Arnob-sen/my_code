#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,c=0,n,m,d;
    cin>>k;
    char arr[]={'a' , 'e' , 'i' , 'o' , 'u' };
    for(int i=5;i<=k/5;i++){
        if(k%i==0){
            n=i;
            m=k/i;
            c=1;
            break;
        }
    }
    if(c!=1)cout<<"-1"<<endl;

    else{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<arr[(i%5 + j%5)%5];






    }

}
}
