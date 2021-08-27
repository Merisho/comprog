#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	return a == 0 ? b : gcd(b % a, a);
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<ll> a(n);
		for (ll& ai : a) {
			cin >> ai;
		}

		int ans = 1;
		ll pm = 0;
		int k = 1;
		for (int i = 1; i < n; ++i) {
			ll p = a[i - 1];
			ll ai = a[i];

			ll m = abs(ai - p);
			if (pm == 0) {
				pm = m;
			}

			ll gm = gcd(m, pm);
			if (gm > 1) {
				++k;
				pm = gm;
			} else {
				ans = max(ans, k);
				k = 1;
				pm = 0;

				if (m > 1) {
					--i;
				}
			}
		}

		ans = max(ans, k);

		cout << ans << endl;
	}
	
	return 0;
}
