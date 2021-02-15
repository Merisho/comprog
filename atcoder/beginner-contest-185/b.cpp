#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, m, t;

	cin >> n >> m >> t;

	int p = 0;
	int ok = true;
	int mx = n;
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;

		int loss = a - p;
		n -= loss;
		if (n <= 0) {
			ok = false;
		}

		n = min(mx, n + b - a);

		p = b;
	}

	n -= (t - p);
	if (n <= 0) {
		ok = false;
	}

	cout << (ok ? "Yes" : "No");
	
	return 0;
}
