#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> a(n);
		ll s = 0;
		for (int& ai : a) {
			cin >> ai;
			s += ai;
		}

		ll ans = -__LONG_LONG_MAX__;
		ll c = 0;
		ll mx = -__LONG_LONG_MAX__;
		for (int i = 0; i < n - 1; ++i) {
			c += a[i];
			mx = max(mx, c);
			c = max(c, 0LL);
		}

		ans = mx;

		c = 0;
		mx = -__LONG_LONG_MAX__;
		for (int i = 1; i < n; ++i) {
			c += a[i];
			mx = max(mx, c);
			c = max(c, 0LL);
		}

		ans = max(ans, mx);

		if (s > ans) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
