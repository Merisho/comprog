#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int INF = 1e9;

int main() {
	int T;
	cin >> T;

	vector<vector<int>> dp;
	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> t;
		for (int i = 0; i < n; ++i) {
			int ti;
			cin >> ti;
			--ti;
			t.push_back(ti);
		}

		sort(t.begin(), t.end());
		dp = vector<vector<int>>(n + 1, vector<int>(2 * n + 1, INF));

		dp[0][0] = 0;
		for (int i = 0; i < n + 1; ++i) {
			for (int j = 0; j < 2 * n; ++j) {
				if (i < n) {
					dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + abs(t[i] - j));
				}
				dp[i][j + 1] = min(dp[i][j + 1], dp[i][j]);
			}
		}		

		cout << dp[n][2 * n] << endl;
	}
	
	return 0;
}
