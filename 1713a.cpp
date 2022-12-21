
#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,sum2=0,x1=INT_MAX,x2=INT_MIN,y1=INT_MAX,y2=INT_MIN;
        cin>>n;
        vector<ll>va,vb;
        while(n--){

            ll a,b;
            cin>>a>>b;
            x1=min(x1,a);
            x2=max(x2,a);
            y1=min(y1,b);
            y2=max(y2,b);


        }
        if(x1>0)sum+=abs(2*x1);
        else if(x1<0)sum+=abs(2*x2);
        else sum+=abs(2*(abs(x1)+abs(x2));
        if(y1>0){
		sum += abs(2*y2);
	}
	else if(y2<0){
		sum += abs(2*y1);
	}
	else{
		sum += 2*(abs(y1) + abs(y2));
	}

	cout << sum << endl;
}




        cout<<sum1+sum2<<endl;
    }

}
