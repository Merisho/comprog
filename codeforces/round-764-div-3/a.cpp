#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int mx = 0;
		int mn = 1e9 + 1;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			mx = max(mx, a);
			mn = min(mn, a);
		}

		cout << (mx - mn) << endl;
	}
	
	return 0;
}
