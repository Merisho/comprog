#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> dp;
vector<int> a;
vector<int> b;

int f(int i, int j) {
	if (dp[i][j] > -1) {
		return dp[i][j];
	}

	if (min(i, j) == 0) {
		return i + j;
	}

	int res = min(f(i - 1, j) + 1, f(i, j - 1) + 1);
	res = min(res, f(i - 1, j - 1) + (int)(a[i] != b[j]));

	return dp[i][j] = res;
}

int main() {
	int n, m;
	cin >> n >> m;

	dp = vector<vector<int>>(n + 1, vector<int>(m + 1, -1));

	a = vector<int>(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	b = vector<int>(m + 1);
	for (int i = 1; i <= m; ++i) {
		cin >> b[i];
	}

	cout << f(n, m);

	return 0;
}
