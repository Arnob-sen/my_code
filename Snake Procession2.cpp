#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t;

    cin>>t;

    while(t--){
            int H=0,T=0,c=0;

        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='H')c++;
            else if(s[i]=='T')c--;
            if(c==2||c==-1){
            break;
            }
        }
        if(c==0)cout<<"VALID"<<endl;

        else cout<<"INVALID"<<endl;
        c=0;
        }



    return 0;
}
#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int l,count=0,i;
	    scanf("%d",&l);
	    char s[l+1];
	    scanf("%s",s);
	    for(i=0;i<l;i++)
	    {
	        if(s[i]=='H') count++;

	        else if(s[i]=='T') count--;

	        if(count==2||count==-1) break;

	    }
	    if(count==0) printf("Valid\n");

	    else printf("Invalid\n");
	}
	return 0;
}

