#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll x, y;
		cin >> x >> y;

		ll ans = 0;
		for (ll k = 1; k <= sqrt(x); ++k) {
			ans += max(0LL, min(y, x / k - 1) - k);
		}

		cout << ans << endl;
	}
	
	return 0;
}
