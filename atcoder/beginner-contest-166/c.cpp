#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> h(n);
	for (int i = 0; i < n; ++i) {
		cin >> h[i];
	}

	vector<vector<int>> g(n);
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;

		--a;
		--b;

		g[a].push_back(b);
		g[b].push_back(a);
	}

	int good = 0;
	for (int i = 0; i < n; ++i) {
		bool b = true;
		for (int v : g[i]) {
			if (h[v] >= h[i]) {
				b = false;
				break;
			}
		}

		if (b) {
			++good;
		}
	}

	cout << good;
	
	return 0;
}
	