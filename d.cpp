#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<ll> a(n);
	for (ll& ai : a) {
		cin >> ai;
	}

	sort(a.begin(), a.end());

	ll mx = a[n - 1];
	ll s = 0;
	for (int i = 0; i < n - 1; ++i) {
		ll t = mx;
		mx |= a[i];
		a[i] &= t;
		s += (a[i] * a[i]);
	}

	s += (mx * mx);

	cout << s;
	
	return 0;
}
