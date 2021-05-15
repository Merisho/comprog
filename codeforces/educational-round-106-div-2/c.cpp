#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n;
		cin >> n;

		vector<ll> c(n);
		for (ll& ci : c) {
			cin >> ci;
		}

		ll s[2] = {c[0], 0};
		ll ans = 1e18;
		ll mn[2] = {c[0], ans};
		ll r[2] = {n - 1, n};
		for (int i = 1; i < n; ++i) {
			s[i % 2] += c[i];
			mn[i % 2] = min(mn[i % 2], c[i]);
			--r[i % 2];
			ans = min(ans, s[0] + mn[0] * r[0] + s[1] + mn[1] * r[1]);
		}

		cout << ans << endl;
	}
	
	return 0;
}
