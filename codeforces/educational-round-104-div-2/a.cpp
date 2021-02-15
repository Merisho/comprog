#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		sort(a.begin(), a.end());

		int ans = 0;
		bool ok = false;
		for (int i = 1; i < n; ++i) {
			if (a[i] != a[i - 1]) {
				ok = true;
			}

			if (ok) {
				++ans;
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}
