
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int c=0;
    while(t--){
        string str;
        cin>>str;
        char e;
        cin>>e;

        int d=str.size();
        for(int i=0;i<d;i+=2){
            if(str[i]==e)c=1;
        }
       // if(c==1)cout<<"YES"<<endl;
     //   else cout<<"NO"<<endl;
     c?puts("YES"):puts("NO");

        //cout<<d<<endl;
    }


    return 0;
}
//{
/*/	cin>>l;
	while(l--&&cin>>s>>c)
	{
		v=0;
		for(int i=0;i<s.size();i+=2)
			if(s[i]==c)
				v=1;
		v?puts("YES"):puts("NO");
	}
}
/*/
