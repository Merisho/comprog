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

	multiset<ll> s(h.begin() + X, h.end());

	ll y = 0;
	multiset<ll> ss;
	for (ll si : s) {
		if (y + si > Y) {
			break;
		}
		
		y += si;
		ss.insert(si);
	}

	ll z = ss.size();
	for (ll i = X; i < n; ++i) {
		if (ss.count(h[i]) > 0) {
			y -= h[i];
			ss.erase(h[i - X]);

			if (h[i - X] - h[i] <= 0) {
				y += h[i - X];
				ss.insert(h[i - X]);
			}
		} else if (y + h[i - X] <= Y) {
			y += h[i - X];
			s.insert(h[i - X]);
		}

		z = max(z, (ll)ss.size());
	}

	cout << (X + z);
	
	return 0;
}
