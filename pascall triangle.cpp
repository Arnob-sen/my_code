#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,value;

    cin>>n;

    for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){

                    if(i==0||j==0)value=1;
                else value =value*(i-j+1)/j;

                 cout<<value<<" ";

            }
            cout<<endl;


       // endl;
    }



    return 0;
}
