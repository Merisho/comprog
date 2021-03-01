#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> g;
vector<bool> e;

int md = 0;

int find(int v, int p = -1, int d = 0) {
	int k = 0;
	for (int u : g[v]) {
		if (u == p) {
			continue;
		}

		int f = find(u, v, d + 1);
		if (f > 0 || !e[u]) {
			k += f + 2;
			md = max(md, d + 1);
		}
	}

	return k;
}

int main() {
	int n, m;
	cin >> n >> m;

	g = vector<vector<int>>(n);
	e = vector<bool>(n, false);

	for (int i = 0; i < m; ++i) {
		int ei;
		cin >> ei;

		e[ei] = true;
	}

	for (int i = 0; i < n - 1; ++i) {
		int ui, vi;
		cin >> ui >> vi;

		g[ui].push_back(vi);
		g[vi].push_back(ui);
	}

	int ans = max(0, find(0) - md);

	cout << ans;
	
	return 0;
}
