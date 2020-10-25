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
	for (int i = 1; i <= n; ++i) {
		ll a;
		cin >> a;

		p += a;
		if (m.count(p) != 0) {
			++ans;
			m.clear();
			m[0] = 0;
		}

		m[p] = i;
	}

	cout << ans;
	
	return 0;
}
