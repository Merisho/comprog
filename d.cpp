#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<ll> ps(n + 1, 0);
	int mi = 0;
	for (int i = 1; i <= n; ++i) {
		ll a;
		cin >> a;

		ps[i] = ps[i - 1] + a;
		
		if (ps[i] > ps[mi]) {
			mi = i;
		}
	}

	ll s = 0;
	ll ans = 0;
	for (int i = 1; i <= n; ++i) {
		if (i >= mi) {
			ans = max(ans, s + ps[mi]);
		}

		s += ps[i];
	}

	cout << ans;
	
	return 0;
}
