#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll a, b, c, d;
	cin >> a >> b >> c >> d;

	ll e = c * d - b;
	if (e <= 0) {
		cout << -1;
		return 0;
	}

	ll k = (a + e - 1) / e;
	cout << k;

	return 0;
}
