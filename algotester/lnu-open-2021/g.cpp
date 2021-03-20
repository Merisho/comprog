#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, X, Y;
	cin >> n >> X >> Y;

	vector<ll> h(n);
	for (ll& hi : h) {
		cin >> hi;
	}

	multiset<ll> s;
	for (int i = X; i < n; ++i) {
		s.insert(h[i]);
	}

	ll y = 0;
	multiset<int> sy;
	for (auto si : s) {
		if (y + si > Y) {
			continue;
		}
		
		y += si;
		sy.insert(si);
	}

	for (ll si : sy) {
		s.erase(si);
	}

	ll z = sy.size();
	for (ll i = X; i < n; ++i) {
		if (sy.count(h[i]) > 0) {
			sy.erase(h[i]);
			y -= h[i];
		} else {
			s.erase(h[i]);
		}

		if (y + h[i - X] <= Y) {
			sy.insert(h[i - X]);
			y += h[i - X];
		} else {
			s.insert(h[i - X]);
		}

		z = max(z, (ll)sy.size());
	}

	cout << (X + z);
	
	return 0;
}
