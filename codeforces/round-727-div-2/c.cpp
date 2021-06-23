#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, k, x;
	cin >> n >> k >> x;

	vector<ll> a(n);
	for (ll& ai : a) {
		cin >> ai;
	}

	sort(a.begin(), a.end());

	ll g = 1;
	vector<ll> b;
	for (int i = 1; i < n; ++i) {
		ll d = a[i] - a[i - 1];
		if (d > x) {
			++g;
			b.push_back((d - 1) / x);
		}
	}

	sort(b.begin(), b.end());
	for (int i = 0; i < b.size(); ++i) {
		if (k - b[i] < 0) {
			break;
		}

		k -= b[i];
		--g;
	}

	cout << g;
	
	return 0;
}
