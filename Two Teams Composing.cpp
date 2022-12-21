#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t,c=1,count=1,max=1;
    cin>>t;

    while(t--){
        long long n;

        cin>>n;

            long long ara[n];

            for(int i=0;i<n;i++){

                cin>>ara[i];
            }
            sort(ara,ara+n);
            for(int i=0;i<n-1;i++)
            {
                if(ara[i]!=ara[i+1])count++;

                if(ara[i]==ara[i+1])
                        c++;
                   if(max<c){max=c;


                }
                if(ara[i]!=ara[i+1])c=1;

            }
       // if(n==1)cout<<"0"<<endl;

            int ans=0;
          cout<<count<<" "<<max<<endl;

          if(max<count)ans=max;
      else if (max>count)ans=count;
      else ans=max-1;

      cout<<ans<<endl;
                count=1;
                c=1,max=1;
                }


    return 0;
}
