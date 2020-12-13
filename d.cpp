#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, m;
	cin >> n >> m;

	if (m == 0) {
		cout << 1;
		return 0;
	}

	vector<int> a(m + 1);
	a[0] = 0;
	for (int i = 1; i <= m; ++i) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int mn = 1e9;
	for (int i = 1; i < m + 1; ++i) {
		int d = a[i] - a[i - 1] - 1;
		if (d == 0) {
			continue;
		}

		mn = min(mn, d);
	}

	int ans = 0;
	for (int i = 1; i < m + 1; ++i) {
		ans += (a[i] - a[i - 1] - 1 + mn - 1) / mn;
	}

	ans += (n - a[m] + mn - 1) / mn;

	cout << ans;
	
	return 0;
}
