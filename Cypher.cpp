#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int ara[n],ara2[n];
        for(i=0;i<n;i++)cin>>ara[i];
        for(i=0;i<n;i++){
            int l;
            cin>>l;
            string str;
            cin>>str;
            int m=0;
            for(int j=0;j<l;j++){
                if(str[j]=='D')m++;
                else if(str[j]=='U')m--;
            }
            ara2[i]=m;


            }
            for(i=0;i<n;i++){
                ara[i]=ara[i]+ara2[i];

                if(ara[i]>=10)ara[i]=ara[i]-10;
                else if(ara[i]<0)ara[i]=ara[i]+10;

                cout<<ara[i]<<" ";

            }
            cout<<endl;

        }

}
/*/
#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n,i;
       scanf("%d",&n);
       int ara[n],res[n];
       for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
       for(i=0;i<n;i++)
       {
           int l;
           scanf("%d",&l);
           char str[l];
           scanf("%s",str);
           int ans=0;
           for(int j=0;j<l;j++)
           {
               if(str[j]=='D')
                ans=ans+1;
               else if(str[j]=='U')
                ans=ans-1;
           }
           res[i]=ans;
       }
       for(i=0;i<n;i++)
        {
            ara[i]=ara[i]+res[i];
            if(ara[i]>=10)
                ara[i]=ara[i]-10;
            else if(ara[i]<0)
                ara[i]=ara[i]+10;
            printf("%d ",ara[i]);
        }
        printf("\n");

    }
    return 0;
}
/*/

