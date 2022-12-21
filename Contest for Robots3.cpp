#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,point1=0,point2=0;
    cin>>n;
    int ara[n],robot2,ara2[n];


    for(int i=0;i<n;i++){
        cin>>ara[i];
    }

    for(int i=0;i<n;i++){
             cin>>robot2;


        if(robot2!=ara[i]){
            point1+=ara[i];
            point2+=robot2;
        }
    }
        if(point1==0 || point2==n)cout<<-1;
        else cout<<point2/point1+1;

    cout<<point1<<" "<<point2;



    return 0;
}
