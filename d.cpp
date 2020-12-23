#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	ll ans = 0;
	ll t = 0;
	ll mx = 0;
	ll ps = 0;
	for (int i = 0; i < n; ++i) {
		ll a;
		cin >> a;

		ps += a;
		mx = max(mx, ps);
		ans = max(ans, t + mx);
		t += ps;
	}

	cout << ans;
	
	return 0;
}
