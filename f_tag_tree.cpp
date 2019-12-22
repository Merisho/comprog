#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9 + 1;

int main() {
	int n, u, v;
	cin >> n >> u >> v;

	int d[n][n] = { INF };
	for (int i = 0; i < n - 1; ++i) {
		int a, b;
		cin >> a >> b;

		--a;
		--b;
		d[a][b] = 1;
		d[a][a] = 0;
		d[b][b] = 0;
	}

	for (int i = 0; i < n; ++i) {
		stack<int> p;
		p.push(i);
		while (!p.empty()) {
			int v = p.top();
			p.pop();

			for (int j = 0; j < n; ++j) {
				if (d[v][j] < INF) {
					p.push(j);
					d[i][j] = min(d[i][j], d[i][v] + 1);
				}
			}
		}
	}

	int k = 0;
	while (u != v) {
		int m = -1 * INF;
		for (int i = 0; i < n; ++i) {
			if (d[v][i] - d[v][u] > m && d[v][i] != INF && d[v][u] != INF) {
				u = i;
				m = d[v][i] - d[v][u];
			}
		}

		m = INF;
		for (int i = 0; i < n; ++i) {
			if (d[v][i] < m) {
				v = i;
				m = d[v][i];
			}
		}

		++k;
	}

	cout << k;
	
	return 0;
}
	