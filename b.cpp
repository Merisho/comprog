#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int[4]> dp;

int p(int i, int jj, int j) {
	if (a[i - 1] < a[i] && jj >= j || a[i - 1] > a[i] && jj <= j || a[i - 1] == a[i] && jj != j) {
		return 1;
	}

	return 0;
}

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int k;
		cin >> k;

		a = vector<int>(k);
		for (int i = 0; i < k; ++i) {
			cin >> a[i];
		}

		dp = vector<int[4]>(k);
		for (int i = 0; i < 4; ++i) {
			dp[0][i] = 0;
		}

		for (int i = 1; i < k; ++i) {
			for (int j = 0; j < 4; ++j) {
				dp[i][j] = dp[i - 1][0] + p(i, 0, j);
				for (int jj = 1; jj < 4; ++jj) {
					dp[i][j] = min(dp[i][j], dp[i - 1][jj] + p(i, jj, j));
				}
			}
		}

		int ans = 1e9;
		for (int i = 0; i < 4; ++i) {
			ans = min(ans, dp[k - 1][i]);
		}

		cout << "Case #" << t << ": " << ans << endl;
	}

	return 0;
}
	