#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	map<ll, int> m;
	m[0] = 0;
	ll p = 0;
	int ans = 0;
	int r = 0;
	for (int i = 1; i <= n; ++i) {
		ll a;
		cin >> a;

		p += a;
		if (m.count(p) != 0) {
			if (r - m[p] < 2) {
				++ans;
			}

			r = i;
		}

		m[p] = i;
	}

	cout << ans;
	
	return 0;
}
