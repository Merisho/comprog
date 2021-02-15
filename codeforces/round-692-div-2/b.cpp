#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll K = 1e8;

bool ok(ll n) {
	ll m = n;

	while (m != 0) {
		ll d = m % 10;
		if (d != 0 && n % d != 0) {
			return false;
		}

		m /= 10;
	}

	return true;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n;
		cin >> n;

		ll ans;
		for (ll m = n; m <= n + K; ++m) {
			if (ok(m)) {
				ans = m;
				break;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
