#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
             long long a,d,j;

        cin>>a;
        d=sqrt(a);
        for( j=2;j*j<d;j++){
            if(a%j==0)break;
        }
        if(j*j>d && d*d==a&&a>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
     return 0;
}
  /*/  #include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,s,i;
       scanf("%lld",&a);
     //  cin>>a;
        s=sqrt(a);
        for(i=2; i*i<s; i++)
            if(a%i==0)
                break;
        if(i*i>s&&a==s*s&&a>1)
            printf("YES\n");
           // cout<<"YES"<<endl;
        else
           printf("NO\n");
          // cout<<"NO"<<endl;
    }
    return 0;
}
	#include<stdio.h>
#include<math.h>
int main()
{
    int n,j;
    long long a,b;
    scanf("%i",&n);
    while(n--)
    {
        scanf("%I64d",&a);
        b=sqrtl(a);
        for(j=2;j*j<=b;j++)
            if(b%j==0)
			break;
		if(j*j>b && b*b==a && a>1)
        puts("YES");
        else
        puts("NO");
    }
    return 0;
}
/*/




