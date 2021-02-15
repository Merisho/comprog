#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll max_sum(vector<ll>& a) {
	ll curr = 0;
	ll mn = 0;
	ll ans = -1e9;
	for (ll ai : a) {
		curr += ai;
		mn = min(mn, curr);
		ans = max(ans, curr - mn);
	}

	return ans;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<ll> a(n);
		ll sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (i % 2 == 0) {
				sum += a[i];
			}
		}

		if (n == 1) {
			cout << sum << endl;
			continue;
		}

		int m = n / 2 - 1;
		vector<ll> v1(m + 1);
		for (int i = 0; i <= m; ++i) {
			v1[i] = a[2 * i + 1] - a[2 * i];
		}

		vector<ll> v2(m + 1, 0);
		for (int i = 0; 2 * i + 2 < n; ++i) {
			v2[i] = a[2 * i + 1] - a[2 * i + 2];
		}

		ll ms = max(max_sum(v1), max_sum(v2));
		ll ans = sum + max(ms, 0LL);

		cout << ans << endl;
	}
	
	return 0;
}
