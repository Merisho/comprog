#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> dp;
int n, p, k, x, y;
string s;

int f(int i) {
	if (i < p) {
		return 1e9;
	}

	if (dp[i] != -1) {
		return dp[i];
	}

	if (s[i - 1] == '0') {
		return dp[i] = min(x + f(i - k), y * (i - p) + x);
	}

	return dp[i] = min(y * (i - p), f(i - k));
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		cin >> n >> p >> k >> s >> x >> y;
		
		dp = vector<int>(n + 1, -1);

		int ans = 1e9;
		for (int i = 0; i < k; ++i) {
			ans = min(ans, f(n - i));
		}

		cout << ans << endl;
	}
	
	return 0;
}
