#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[2*n+1],arr2[2*n+1];
    for(int i=0;i<2*n;i++){
            cin>>arr[i];
    }
    long long m=1,c=0;
    for(int i=0;i<2*n-1;i++){
            for(int j=i+1;j<2*n;j++){
                if(arr[i]==arr[j]){
                    c=abs(i-j);
                    if(c>m)m=c;

                    break;
                }
            }


            }



    cout<<m<<endl;
}
