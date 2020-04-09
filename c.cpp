#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> v;

int dfs(int x) {
	v[x] = true;
	int k = 1;
	for (int i = 0; i < g[x].size(); ++i) {
		int to = g[x][i];
		if (!v[to]) {
			 k += dfs(to);
		}
	}

	return k;
}

int main() {
	int n, m;
	cin >> n >> m;

	v = vector<bool>(n, false);
	g = vector<vector<int>>(n);
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;

		g[a - 1].push_back(b - 1);
		g[b - 1].push_back(a - 1);
	}

	vector<int> c(n + 1, 0);
	for (int i = 0; i < n; ++i) {
		if (!v[i]) {
			int k = dfs(i);
			++c[k];
		}
	}

	int s = 0;
	for (int i = 1; i <= n; ++i) {
		s += c[i];
		int r = c[i];
		for (int j = i + 1; j < n; ++j) {
			if (c[j] == 0) {
				continue;
			}

			r *= c[j];
		}

		s += r;
	}

	cout << s;
	
	return 0;
}
	