#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int T;
	cin >> T;
 
	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;
 
		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}
 
		bool b[n];
		memset(b, false, n);
		bool ans = true;
		for (int i = 0; i < n; ++i) {	
			int j = ((a[i] + i) % n + n) % n;
			if (b[j]) {
				ans = false;
				break;
			}

			b[j] = true;
		}
 
		if (ans) {
			cout << "YES";
		} else {
			cout << "NO";
		}
 
		cout << endl;
	}
	
	return 0;
}