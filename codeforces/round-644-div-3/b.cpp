#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> s(n);
		for (int& si : s) {
			cin >> si;
		}

		int ans = 1e9;
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				ans = min(ans, abs(s[i] - s[j]));
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
	