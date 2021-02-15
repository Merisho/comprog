#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> g = vector<vector<int>>(n);

	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < m; ++i) {
		int x, y;
		cin >> x >> y;

		--x;
		--y;

		g[x].push_back(y);
	}

	int ans = -1e9;
	map<pair<int, int>, bool> g_vis;
	for (int i = 0; i < n; ++i) {
		vector<bool> vis(n, false);

		int p = a[i];
		queue<int> q;
		q.push(i);
		g_vis[{i, i}] = true;
		while (!q.empty()) {
			int v = q.front();
			q.pop();

			if (vis[v]) {
				continue;
			}

			vis[v] = true;
			if (!g_vis[{v, i}] && !g_vis[{i, v}]) {
				ans = max(ans, a[v] - p);
			}

			for (int u : g[v]) {
				q.push(u);
			}
		}
	}

	cout << ans;
	
	return 0;
}
