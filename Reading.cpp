#include<bits/stdc++.h>
using namespace std;

int main()

{
   // freopen("input.txt", "r" ,stdin);
//	freopen("output.txt", "w",stdout);
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    vector<int>v;
    vector<int>v2;
    vector<int>v3;
    for(int i=0;i<n;i++){
            cin>>arr[i];
    v.push_back(arr[i]);
    }
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==v[j]){
                   v2.push_back(j+1);

            }
        }
    }
    sort(v2.begin(),v2.end());
    for (int i=0; i<v2.size(); i++)
    {

        int j;
        for (j=0; j<i; j++)
           if (v2[i] == v2[j])
               break;


        if (i == j)
          v3.push_back(v2[i]);
    }

   // for(int i=0;i<n;i++)cout<<v[i];
   cout<<arr[k-1]<<endl;
   sort(v3.begin(),v3.end());
    for(int i=0;i<v3.size();i++)cout<<v3[i]<<" ";



    return 0;
}
