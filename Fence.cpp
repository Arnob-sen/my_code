#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,min=1000000000,c=1;
    long long sum=0,index=0;
    cin>>n>>k;
    int ara[n+1];
    ara[0]=0;
    for(int i=1;i<=n;i++){
            cin>>ara[i];
                sum+=ara[i];
               // cout<<sum<<endl;
                if(c!=k)c++;
                else {
                     sum-=ara[i-k];
                     //4 br hoya gale ek number ta bad
                    if(min>sum)
                        {
                            min=sum;
                            index=i-k;
                }

                }
    }

    cout<<index+1<<endl;



    return 0;
}

