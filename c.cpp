#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<ll> c(n);
		for (ll& ci : c) {
			cin >> ci;
		}

		vector<ll> a(n, 0);
		cin >> a[0];
		for (int i = 0; i < n - 1; ++i) {
			cin >> a[i];
		}

		vector<ll> b(n, 0);
		cin >> b[0];
		for (int i = 0; i < n - 1; ++i) {
			cin >> b[i];
		}

		vector<ll> dp(n, 0);
		dp[0] = abs(b[0] - a[0]);
		ll ans = 0;
		for (int i = 1; i < n; ++i) {
			ans = max(ans, dp[i - 1] + c[i] + 1LL);

			if (a[i] != b[i]) {
				dp[i] = dp[i - 1] + c[i] + 1LL - abs(a[i] - b[i]);
				dp[i] = max(dp[i], abs(a[i] - b[i]));
			} else {
				dp[i] = 0LL;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
