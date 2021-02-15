#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

double h,c,t;
double calc(ll m) {
	return ((0.0 + m) * h + (0.0 + m - 1) * c) / (0.0 + m + m - 1);
}

void solve() {
	cin >> h >> c >> t;

	if (t == h) {
		cout << 1 << endl;
		return;
	}

	double avg = (h + c) / 2;
	if (t <= avg) {
		cout << 2 << endl;
		return;
	}

	ll l = 1;
	ll r = 1ll << 38;
	ll k;
	while (l <= r) {
		ll m = l + (r - l) / 2;
		double tt = calc(m);
		if (tt >= t) {
			l = m + 1;
			k = m;
		} else {
			r = m - 1;
		}
	}

	ll ans = 2;
	for (int i = 0; i < 1000; ++i) {
		double c = calc(k + i);
		if (abs(t - c) < abs(t - avg)) {
			ans = k + i;
			avg = c;
		}
	}

	cout << (2 * ans - 1) << endl;
}
 
int main() {
	int T;
	cin >> T;
 
	for (int tt = 0; tt < T; ++tt) {
		solve();
	}
	
	return 0;
}