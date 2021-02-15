#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> c(n + 1, 0);
		int ans = 1;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			++c[a];
			ans = max(ans, c[a]);
		}

		cout << ans << endl;
	}
	
	return 0;
}
