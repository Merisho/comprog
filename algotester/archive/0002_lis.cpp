#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int& ai : a) {
		cin >> ai;
	}

	int ans = 1;
	vector<int> dp(n, 1);
	for (int i = 1; i < n; ++i) {
		for (int j = i - 1; j >= 0; --j) {
			if (a[j] < a[i]) {
				dp[i] = max(dp[i], 1 + dp[j]);
			}
		}

		ans = max(ans, dp[i]);
	}

	cout << ans;
	
	return 0;
}
