#include<bits/stdc++.h>
using namespace std;
int t,n,k,a,b,x;
int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		map<int,int>fir,las;
		for(int i=1;i<=n;i++){
			scanf("%d",&a);
			if(!fir[a])fir[a]=i;
			las[a]=i;
		}
	//	cout<<fir[a]<<" "<<las[a]<<endl;
		while(k--){
			scanf("%d%d",&x,&b);
			if(fir[x]&&las[b]&&fir[x]<=las[b])printf("Yes\n");
			else printf("No\n");

			cout<<fir[x]<<" "<<las[b]<<endl;
		}

	}
}
