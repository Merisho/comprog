#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, C;
	cin >> n >> C;

	map<ll, ll> m;
	for (int i = 0; i < n; ++i) {
		ll a, b, c;
		cin >> a >> b >> c;

		m[a] += c;
		m[b + 1] -= c;
	}

	ll ps = 0;
	ll pi = -1;
	ll ans = 0;
	for (pair<ll, ll> s : m) {
		ans += (s.first - pi) * min(ps, C);

		ps += s.second;
		pi = s.first;
	}

	cout << ans;
	
	return 0;
}
