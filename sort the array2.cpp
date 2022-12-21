#include <bits/stdc++.h>

using namespace std;


int main() {
	int n;
	cin >> n;
	int arr[n+1],ara[n+1];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		ara[i] = arr[i];
	}
	map<int, int> mp;
	sort(ara, ara + n);
	for (int i = 0; i < n; i++) {
		mp[ara[i]] = i;//1st a value then index[0 index] sorted
	}
	for (int i = 0; i < n; i++) {
		arr[i] = mp[arr[i]];// index gula array te nilm sort howar por..3 2 1 r value gula kun kun index a ase ogula... index[2,1,0]
	}
	//for(int i=0;i<n;i++)cout<<a[i]<<" ";

	//cout<<endl;
	//for(auto ii:mp) cout<<ii.first<<" "<<ii.second<<endl;
	int L = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] != i) {//check korlm index gula jayga moto ache kina.thkla sorted.r jodi na thke taila kun jygy thke sequence break kora suru korse ta store korlm
			L = i;//
			break;
		}
	}
	int R = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] != i) { // r a store krlm kun index a gia sequence break sesh hoise tar index
			R = i;
			break;
		}
	}
	//cout<<L<<" "<<R<<endl;

	if (L == -1 || R == -1) {//jodi sorted thke
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	} else {
		reverse(arr + L, arr + R + 1);//l theke r prjonto ultai disi

		bool found = true;
		for (int i = 0; i < n; i++) {//check korlm ultanor por sorted ase kina.. jodi thke taila ultaia yes pawa jabe
			if (arr[i] != i) {
				found=false;
			}
		}
		if (found) {
			cout << "yes" << endl;
			cout << L + 1 << " " << R + 1 << endl;
		} else {
			cout << "no" << endl;
		}
	}

	return 0;
}
