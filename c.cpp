#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int ans = n;
		for (int i = 1; i <= sqrt(n); ++i) {
			ans = min(ans, i - 1 + (n - 1) / i);
		}

		cout << ans << endl;
	}
	
	return 0;
}
