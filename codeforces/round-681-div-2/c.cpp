#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> a, b;
ll s;

bool ok(ll k) {
	int n = a.size();

	ll ss = s;
	for (int i = 0; i < n; ++i) {
		if (a[i] <= k) {
			ss -= b[i];
		}
	}

	return ss <= k;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		a = vector<ll>(n);
		for (ll& ai : a) {
			cin >> ai;
		}

		b = vector<ll>(n);
		s = 0;
		for (ll& bi : b) {
			cin >> bi;
			s += bi;
		}

		ll l = 1;
		ll r = 1e17;
		while (l <= r) {
			ll m = l + (r - l) / 2;

			if (ok(m)) {
				r = m - 1;
			} else {
				l = m + 1;
			}
		}

		cout << (r + 1) << endl;
	}
	
	return 0;
}
