#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9;

vector<vector<int>> g;
vector<int> ans;

void find(vector<int>& targetParity, vector<int>& oppParity) {
	vector<int> d(targetParity.size() + oppParity.size(), INF);
	queue<int> q;
	for (int v : oppParity) {
		d[v] = 0;
		q.push(v);
	}

	while (!q.empty()) {
		int v = q.front();
		q.pop();

		for (int from : g[v]) {
			if (d[from] == INF) {
				d[from] = d[v] + 1;
				q.push(from);
			}
		}
	}

	for (int v : targetParity) {
		if (d[v] != INF) {
			ans[v] = d[v];
		}
	}
}

int main() {
	int n;
	cin >> n;

	g = vector<vector<int>>(n);
	ans = vector<int>(n, -1);

	vector<int> odd;
	vector<int> even;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		if (a % 2 == 0) {
			even.push_back(i);
		} else {
			odd.push_back(i);
		}

		int l = i - a;
		int r = i + a;
		if (l >= 0) {
			g[l].push_back(i);
		}

		if (r < n) {
			g[r].push_back(i);
		}
	}

	find(even, odd);
	find(odd, even);

	for (int i = 0; i < n; ++i) {
		cout << ans[i] << " ";
	}
	
	return 0;
}
	