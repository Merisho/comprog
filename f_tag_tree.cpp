#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9 + 1;

int main() {
	int n, u, v;
	cin >> n >> u >> v;
	--u;
	--v;

	int d[n][n];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			d[i][j] = INF;
		}

		d[i][i] = 0;
	}

	for (int i = 0; i < n - 1; ++i) {
		int a, b;
		cin >> a >> b;

		--a;
		--b;
		d[a][b] = 1;
		d[b][a] = 1;
	}

	for (int i = 0; i < n; ++i) {
		stack<int> p;
		p.push(i);

		bool u[n];
		while (!p.empty()) {
			int v = p.top();
			p.pop();

			u[v] = true;

			for (int j = 0; j < n; ++j) {
				int a = d[v][j];
				if (a == 1 && !u[j]) {
					p.push(j);
					d[i][j] = min(d[i][j], d[i][v] + 1);
					d[j][i] = d[i][j];
				}
			}
		}
	}

	int k = 0;
	while (u != v) {
		int dd = -INF;
		for (int i = 0; i < n; ++i) {
			if (i == u) {
				continue;
			}

			if (d[v][i] - d[u][i] > dd) {
				dd = d[v][i] - d[u][i];
				u = i;

				if (u == v) {
					break;
				}

				for (int j = 0; j < n; ++j) {
					if (j == v) {
						continue;
					}

					if (d[v][j] + d[j][i] == d[v][i]) {
						v = j;
						k += d[v][j];
						break;
					}
				}
			}
		}
	}

	cout << k;
	
	return 0;
}
	