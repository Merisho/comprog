#include <bits/stdc++.h>
using namespace std;

vector<int> dp;
vector<int> s;
int n;

int f(int i) {
	if (i > n / 2) {
		return 1;
	}

	if (dp[i] > 0) {
		return dp[i];
	}

	dp[i] = 1;
	for (int j = 2 * i; j <= n; j += i) {
		if (s[j] > s[i]) {
			dp[i] = max(dp[i], f(j) + 1);
		}
	}

	return dp[i];
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		cin >> n;

		dp = vector<int>(n + 1, 0);
		s = vector<int>(n + 1);
		for (int i = 1; i <= n; ++i) {
			cin >> s[i];
		}

		int ans = 1;
		for (int i = 1; i <= n; ++i) {
			ans = max(ans, f(i));
		}

		cout << ans << endl;
	}
	
	return 0;
}
	