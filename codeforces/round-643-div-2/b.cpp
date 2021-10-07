#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> e(n);
		for (int& ei : e) {
			cin >> ei;
		}

		sort(e.begin(), e.end());

		int j = 0;
		int ans = 0;
		for (int i = 1; i <= n; ++i) {
			if (e[i - 1] <= i - j) {
				++ans;
				j = i;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
