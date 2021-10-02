#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<ll> c(n);
	for (int i = 0; i < n; ++i) {
		cin >> c[i];
	}

	ll ans = 0;
	for (int i = 0; i < n; i += 2) {
		ll bal = 0;
		ll minbal = 0;
		for (int j = i + 1; j < n; ++j) {
			if (i % 2 != j % 2) {
				ll r = max(c[j] + bal, 1LL);
				ll l = max(minbal, 1LL);
				ans += min(c[i], r) - max(1LL, l) + 1LL;
			}

			if (j % 2 == 0) {
				bal -= c[j];
			} else {
				bal += c[j];
			}

			minbal = min(minbal, bal);
		}
	}

	cout << ans;
	
	return 0;
}
