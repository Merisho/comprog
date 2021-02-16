#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int ans = 0;
		int p;
		cin >> p;
		for (int i = 1; i < n; ++i) {
			int a;
			cin >> a;

			int mx = max(a, p);
			int mn = min(a, p);

			while ((mx + mn - 1) / mn > 2) {
				++ans;
				mn *= 2;
			}

			p = a;
		}

		cout << ans << endl;
	}
	
	return 0;
}
