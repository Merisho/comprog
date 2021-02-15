#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	ll curr = 0;
	int m = (n + 1) / 2;
	for (int i = 0; i < m; ++i) {
		curr += a[2 * i];
	}

	ll ans = curr;
	for (int i = 0; i <= n - 2; ++i) {
		curr -= a[(2 * i) % n];
		curr += a[(2 * (i + m)) % n];
		ans = max(ans, curr);
	}

	cout << ans;
	
	return 0;
}
