#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int n, k;
		cin >> n >> k;

		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		int ans = 0;
		int j = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i] == k - j) {
				++j;
			} else {
				if (a[i] == k) {
					j = 1;
				} else {
					j = 0;
				}
			}

			if (j == k) {
				++ans;
				j = 0;
			}
		}

		cout << "Case #" << t << ": " << ans << endl;
	}
	
	return 0;
}
	