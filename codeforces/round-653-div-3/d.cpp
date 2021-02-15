#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		ll n, k;
		cin >> n >> k;

		vector<ll> rd;
		map<ll, ll> count;
		for (int i = 0; i < n; ++i) {
			ll a;
			cin >> a;

			if (a % k == 0) {
				continue;
			}

			ll r = k - (a % k);
			rd.push_back(r);
			++count[r];
		}

		if (rd.size() == 0) {
			cout << 0 << endl;
			continue;
		}

		ll m = 0;
		for (int i = 0; i < rd.size(); ++i) {		
			m = max(m, count[rd[i]]);
		}

		ll z = 0;
		for (int i = 0; i < rd.size(); ++i) {
			if (count[rd[i]] == m) {
				z = max(z, rd[i]);
			}
		}

		ll ans = z + k * (m - 1) + 1;
		cout << ans << endl;
	}
	
	return 0;
}
	