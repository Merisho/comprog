#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 1e5 + 1;

int f(vector<pair<int, int>>&, int, int, int);

int dp[1000][4096];

int main() {
	memset(dp, -1, sizeof(dp));

	int n, m;
	cin >> n >> m;

	int t = pow(2, n) - 1;

	vector<pair<int, int>> k(m);
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		int ti = 0;
		for (int j = 0; j < b; ++j) {
			int c;
			cin >> c;
			ti += 1 << (c - 1);
		}

		k[i] = make_pair(a, ti);
	}

	int ans = f(k, 0, 0, t);
	cout << (ans >= MAX ? -1 : ans);

	return 0;
}

int f(vector<pair<int, int>>& k, int i, int s, int t) {
	if (i == k.size()) {
		if (s == t) {
			return 0;
		}

		return MAX;
	}

	if (dp[i][s] != -1) {
		return dp[i][s];
	}
	
	int a = f(k, i + 1, s | k[i].second, t) + k[i].first;
	int b = f(k, i + 1, s, t);

	return dp[i][s] = min(a, b);
}
