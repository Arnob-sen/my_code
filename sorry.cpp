/*/#include <stdio.h>

int main() {

   for(int i=1;i<=100;i++)printf("sorry maysha ");

    return 0;
}
//sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha sorry maysha
/*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,j;
   // scanf("%d%d",&n,&q);
    //long int ;
    cin>>n>>q;
    long long int a[n],k[q],temp;

   // scanf("%lld",&a[0]);
   cin>>a[0];
    for(i=1;i<n;i++)
    {
       // scanf("%lld",&temp);
       cin>>temp;
        a[i]=a[i-1]+temp;
    }

    //scanf("%lld",&k[0]);
    cin>>k[0];
    if(k[0]>=a[n-1]){
           // printf("%d\n",n);
           cout<<n<<endl;
            k[0]=0;
        }
        else{
        for(j=0;j<n;j++)
        {
            if(a[j]>k[0])
            {
               // printf("%d\n",n-j);
               cout<<n-j<<endl;
                break;
            }
        }}

    for(i=1;i<n;i++)
    {
      //  scanf("%lld",&temp);
      cin>>temp;
        //k[i]=(k[i-1]+temp)%a[n-1];
        k[i]=k[i-1]+temp;
        if(k[i]>=a[n-1]){
          //  printf("%d\n",n);
          cout<<n<<endl;
            k[i]=0;
        }
        else{
        for(j=0;j<n;j++)
        {
            if(a[j]>k[i])
            {
                //printf("%d\n",n-j);
                cout<<n-j<<endl;
                break;
            }
        }}
    }
}
