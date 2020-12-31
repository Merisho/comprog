#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		vector<int> h(n);
		for (int i = 0; i < n; ++i) {
			cin >> h[i];
		}

		int l = h[0];
		int r = h[0];
		bool ok = true;
		for (int i = 1; i < n - 1; ++i) {
			l = max(l - (k - 1), h[i]);
			r = min(r + k - 1, h[i] + k - 1);
			if (l > r) {
				ok = false;
				break;
			}
		}

		if (!(l - (k - 1) <= h[n - 1] && h[n - 1] <= r + k - 1)) {
			ok = false;
		}

		cout << (ok ? "YES" : "NO") << endl;
	}
	
	return 0;
}
