#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> g;
vector<int> vis;
int dfs(int v) {
	if (vis[v]) {
		return 0;
	}

	vis[v] = 1;

	int x = 1;
	for (int u : g[v]) {
		x += dfs(u);
	}

	return x;
}

int main() {
	int n, m;
	cin >> n >> m;

	g = vector<vector<int>>(n);
	vis = vector<int>(n, 0);

	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		--a;
		--b;

		g[a].push_back(b);
		g[b].push_back(a);
	}

	int ans = 1;
	for (int i = 0; i < n; ++i) {
		ans = max(ans, dfs(i));
	}

	cout << ans;

	return 0;
}
