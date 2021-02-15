#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 1e9;
 
int main() {
	int n, m, x;
	cin >> n >> m >> x;

	vector<int> c(n);
	vector<vector<int>> a(n, vector<int>(m));
 
	for (int i = 0; i < n; ++i) {
		cin >> c[i];
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}

	int ans = MAX;
	int l = 1 << n;
	for (int mask = 0; mask < l; ++mask) {
		vector<int> u(m, 0);
		int cost = 0;
		for (int i = 0; i < n; ++i) {
			if ((mask >> i) & 1) {
				cost += c[i];
				for (int j = 0; j < m; ++j) {
					u[j] += a[i][j];
				}
			}
		}

		bool ok = true;
		for (int i = 0; i < m; ++i) {
			if (u[i] < x) {
				ok = false;
				break;
			}
		}

		if (ok && cost < ans) {
			ans = cost;
		}
	}

	if (ans == MAX) {
		cout << -1;
	} else {
		cout << ans;
	}
	
	return 0;
}