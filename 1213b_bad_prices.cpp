#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		int ans = 0;
		int m = 1e9;
		for (int i = n - 1; i >= 0; --i) {
			if (a[i] > m) {
				++ans;
			} else {
				m = a[i];
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
	