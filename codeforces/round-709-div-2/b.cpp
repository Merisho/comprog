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

		ll ans_m = -1;
		ll ans_c = -1;
		ll d = -1;
		for (int i = 1; i < n; ++i) {
			ll dd = a[i] - a[i - 1];
			if (dd > 0) {
				if (ans_c > -1 && dd != ans_c) {
					ans_c = -1;
					break;
				}

				ans_c = dd;
			} else if (dd < 0) {
				if (d != -1 && -dd != d) {
					ans_c = -1;
					break;
				}

				d = -dd;
			} else {
				ans_c = -1;
				break;
			}
		}

		ans_m = ans_c + d;
		sort(a.begin(), a.end());
		if (ans_c != -1 && a[n - 1] < ans_m) {
			cout << ans_m << " " << ans_c;
		} else {
			cout << -1;
		}

		cout << endl;
	}
	
	return 0;
}
