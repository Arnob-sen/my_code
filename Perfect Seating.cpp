#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,c=1;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ara[n];
        for(long long i=0;i<n;i++)cin>>ara[i];
        long long i=0;

        while(c==1 && i<n-1){
            if(ara[i]>ara[i+1])c=0;

            i++;
        }

          //  else c=0;


        if(c==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        c=1;
    }


    return 0;
}
/*/
#include <stdio.h>
int main()
{
  int n, s[1000], a = 1, d = 1, i;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
    scanf("%d", &s[i]);

  i = 0;

  while ((a == 1 || d == 1) && i < n - 1) {
    if (s[i] < s[i+1])
      d = 0;
    else if (s[i] > s[i+1])
      a = 0;
    i++;
  }

  if (a == 1)
    printf("The array is sorted in ascending order.\n");
  else if (d == 1)
    printf("The array is sorted in descending order.\n");
  else
    printf("The array is not sorted.\n");

  return 0;
}
/*/
