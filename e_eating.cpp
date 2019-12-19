#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;

	pair<long long, long long> ab[n];
	for (int i = 0; i < n; ++i) {
		cin >> ab[i].first >> ab[i].second;
	}

	sort(ab, ab + n);
	
	long long dp[t] = { 0 };
	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		ans = max(ans, dp[t - 1] + ab[i].second);
		for (int j = t - 1; j >= ab[i].first; --j) {
			dp[j] = max(dp[j], dp[j - ab[i].first] + ab[i].second);
		}
	}

	cout << ans;
	
	return 0;
}
	