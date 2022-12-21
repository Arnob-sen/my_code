#include <bits/stdc++.h>

using namespace std;

int num[200000];

int main(){
	int index;
	int n,k;
	int mi = 999999999;
	cin>>n>>k;
	long long sum=0;
	int cnt=1;
	num[0] = 0;
	for ( int i=1; i<=n;i++ ){
		cin >> num[i];
		sum += num[i];
		if(cnt!=k)cnt++;
		else{
			sum -= num[i-k];
			if(sum<mi){
				mi = sum;
				index = i-k+1;
			}
		}
	}
	cout << index << endl;
	return 0;
}

