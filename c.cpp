#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> g;
vector<int> c;

int count(int n, int v, int p = -1) {
	int k = 0;
	vector<int> comps;
	for (int u : g[v]) {
		if (u == p) {
			continue;
		}

		int cc = count(n, u, v);
		comps.push_back(cc);
		k += cc;
	}

	comps.push_back(n - k - 1);

	for (int cc : comps) {
		c[v] = max(c[v], cc);
	}

	return k + 1;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		c = vector<int>(n, 0);
		g = vector<vector<int>>(n);
		for (int i = 0; i < n - 1; ++i) {
			int x, y;
			cin >> x >> y;

			--x;
			--y;

			g[x].push_back(y);
			g[y].push_back(x);
		}

		count(n, 0);

		vector<pair<int, int>> p;

		for (int i = 0; i < n; ++i) {
			p.push_back({c[i], i});
		}

		sort(p.begin(), p.end());

		if (p[0].first == p[1].first) {
			int f;
			for (int u : g[p[1].second]) {
				if (u != p[0].second) {
					f = u;
					break;
				}
			}
			++f;

			cout << (p[1].second + 1) << " " << f << endl;
			cout << (p[0].second + 1) << " " << f << endl;
		} else {
			cout << (p[1].second + 1) << " " << (p[0].second + 1) << endl;
			cout << (p[1].second + 1) << " " << (p[0].second + 1) << endl;
		}
	}
	
	return 0;
}
