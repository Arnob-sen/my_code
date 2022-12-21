
    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
      long long int t,oh,n,k,l,x,y,j,i,c=0,sum=0,sumn;
        cin>>t;
        while(t--)
        {
            c=0;
            cin>>n;
            l=n-1;
            long long int a[n+1];

            for(i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(i=0;i<n-1;i++)
            {
                if(a[i]!=0)
                {
                    l=i;break;
                }
            }
            for(i=l;i<n-1;i++)
            {
                if(a[i]==0)
                {
                    c=c+1;
                }
                else{
                    c=c+a[i];
                }
            }
            cout<<c<<endl;
        }
        return 0;
    }
