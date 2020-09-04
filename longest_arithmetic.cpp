#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> d(n - 1);
		int a, b;
		cin >> a;
		for (int i = 0; i < n - 1; ++i) {
			cin >> b;
			d[i] = b - a;
			a = b;
		}

		int ans = 1;
		int k = 1;
		int p = d[0];
		for (int i = 1; i < n - 1; ++i) {
			if (p == d[i]) {
				++k;
			} else {
				ans = max(ans, k);
				p = d[i];
				k = 1;
			}
		}

		ans = max(ans, k);

		++ans;

		cout << "Case #" << test_case << ": " << ans << endl;
	}
	
	return 0;
}
