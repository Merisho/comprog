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

		vector<ll> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		vector<ll> b(n);
		for (int i = 0; i < n; ++i) {
			cin >> b[i];
		}

		vector<vector<ll>> dp(n, vector<ll>(2, 0));
		dp[0][0] = abs(b[1] - a[1]) + 2LL;
		dp[0][1] = 0LL;
		ll ans = 0;
		for (int i = 1; i < n; ++i) {
			ll mx = max(dp[i - 1][0], dp[i - 1][1]);
			ans = max(ans, mx + c[i] - 1LL);

			if (i == n - 1) {
				break;
			}

			if (a[i + 1] != b[i + 1]) {
				ll top = abs(c[i] - max(a[i + 1], b[i + 1]));
				ll bot = (min(a[i + 1], b[i + 1]) - 1LL);
				dp[i][0] = dp[i - 1][0] + top + bot + 2LL;
			} else {
				dp[i][0] = 2LL;
			}

			dp[i][1] = abs(b[i + 1] - a[i + 1]) + 2LL;
		}

		cout << ans << endl;
	}
	
	return 0;
}
