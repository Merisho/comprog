#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	vector<int> dp(2019, 0);
	dp[s[0] - '0'] = 1;
	int ans = 0;
	for (int i = 1; i < s.length(); ++i) {
		int d = s[i] - '0';
		vector<int> tdp(2019, 0);
		tdp[d] = 1;
		for (int j = 0; j < 2019; ++j) {
			if (dp[j] > 0) {
				int r = (10 * j + d) % 2019;
				if (r == 0) {
					ans += dp[j];
				}

				tdp[r] += dp[j];
			}
		}

		copy(tdp.begin(), tdp.end(), dp.begin());
	}

	cout << ans;
	
	return 0;
}
	