#include<bits/stdc++.h>
using namespace std;

int main()
{




int n;
cin>>n;
vector<bool> is_prime(n+1, true);
vector<int>v,v1;
is_prime[0] = is_prime[1] = false;
for (int i = 2;i<=500000 ; i++) {
    if (is_prime[i]) {
             v.push_back(i);
   // if(v.size()==n)break;


        for (int j = i * i;j<=500000 ; j += i){


            is_prime[j] =false;


        }
       // if(v.size()==n)break;

    }

}
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
}
