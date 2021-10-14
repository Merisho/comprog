#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int n = 1e6 + 1;
ll p[n];

int main() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;

	for (int x = a; x <= b; ++x) {
		++p[x + b];
		--p[x + c + 1];
	}

	for (int i = 1; i < n; ++i) {
		p[i] += p[i - 1];
	}

	for (int i = 1; i < n; ++i) {
		p[i] += p[i - 1];
	}

	ll ans = 0;
	for (int z = c; z <= d; ++z) {
		ans += p[n - 1] - p[z];
	}

	cout << ans;
	
	return 0;
}
