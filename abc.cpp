#include<bits/stdc++.h>
using namespace std;
int find_smallest_number(int a[],int n)
{
int smallest=*min_element(a, a+n);
for(int i=1;i<n;i++)
    if(a[i]%smallest)
    return -1;
return smallest;
}

