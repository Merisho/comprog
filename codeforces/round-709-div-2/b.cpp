#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool arbitrary(vector<ll>& a) {
	ll d = a[1] - a[0];
	for (int i = 2; i < a.size(); ++i) {
		if (d != a[i] - a[i - 1]) {
			return false;
		}
	}

	return true;
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

		if (n == 1 || arbitrary(a)) {
			cout << 0 << endl;
			continue;
		}

		ll bc = a[1] - a[0];
		ll ans_m = -1, ans_c = -1;
		for (int i = 2; i < n; ++i) {
			ll d = a[i] - a[i - 1];
			if (d == bc) {
				continue;
			}

			if (d == 0) {
				ans_m = -1;
				break;
			}

			ll c, m;

			if (bc > 0) {
				c = bc;
				m = (a[i - 1] + c) - a[i];
			} else {
				c = d;
				m = c - bc;
			}

			if (c >= m) {
				ans_m = -1;
				break;
			}

			if (ans_m == -1) {
				ans_m = m;
				ans_c = c;
			} else if (m != ans_m) {
				ans_m = -1;
				break;
			}
		}

		if (ans_m > -1) {
			cout << ans_m << " " << ans_c;
		} else {
			cout << -1;
		}

		cout << endl;
	}
	
	return 0;
}
