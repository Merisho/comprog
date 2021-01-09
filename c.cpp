#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n;
		cin >> n;

		vector<ll> dp(n + 1, 0);
		ll ans = 0;
		for (ll i = 1; i <= n; ++i) {
			ll a;
			cin >> a;

			if (i + a > n) {
				ans = max(ans, dp[i] + a);
			} else {
				dp[i + a] = max(dp[i + a], dp[i] + a);
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
