#include<bits/stdc++.h>
using namespace std;

int main()
{
  typedef  pair<int, int>ii;
    vector<ii>v;
    vector<int>v2;
    int n,k;
    cin>>n>>k;
    int elem;
    for(int i=0;i<n;i++){
        cin>>elem;
        v.push_back(ii(elem,i+1));//element r index eksata pair koira 2 ta array nilm.1st ta element array .porer ta tar index array

    }

sort(v.rbegin(),v.rend());
//for(auto x:v)cout<<x.first<<" "<<x.second<<endl;

    for(int i=0;i<k;i++){
        v2.push_back(v[i].second);//index gula arakta vector a nilm

    }
    sort(v2.begin(),v2.end());
    cout<<v[k-1].first<<endl;// element array r k-1 tomo index print
    for(int i=0;i<k;i++)cout<<v2[i]<<" ";


    return 0;
}
