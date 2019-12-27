#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9 + 1;

vector<int> adj[100000];

void dfs(int d[100000], int p, int v, int k = 1) {
	for (int i = 0; i < adj[v].size(); ++i) {
		int c = adj[v][i];
		if (c == p) {
			continue;
		}

		d[c] = k;
		dfs(d, v, c, k + 1);
	}
}

int main() {
	int n, u, v;
	cin >> n >> u >> v;
	--u;
	--v;

	for (int i = 0; i < n - 1; ++i) {
		int a, b;
		cin >> a >> b;

		--a;
		--b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int ud[100000];
	dfs(ud, u, u);

	int vd[100000];
	dfs(vd, v, v);

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (ud[i] < vd[i] && vd[i] > ans) {
			ans = vd[i] - 1;
		}
	}

	cout << ans;
	
	return 0;
}
	