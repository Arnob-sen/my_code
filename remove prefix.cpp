#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;

	vector<int> arr(n);

	map<int, int> m;

	for(int i=0; i<n; i++){
		cin >> arr[i];
		m[arr[i]]++;
	}
//for(auto ii:m)cout<<ii.first<<" "<<ii.second<<endl;
	int r = -1;

	for(int i=0; i<n; i++){
		if(m[arr[i]] > 1){
			r = max(r, i);
			m[arr[i]]--;
		}
	}

	cout << r + 1 << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}
