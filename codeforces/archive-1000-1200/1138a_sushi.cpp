#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int p;
	cin >> p;

	int l1 = p == 1;
	int l2 = p == 2;
	int ans = 2;
	for (int i = 1; i < n; ++i) {
		int t;
		cin >> t;

		if (t == p) {
			if (t == 1) {
				++l1;
			} else {
				++l2;
			}
		} else {
			ans = max(ans, min(l1, l2) * 2);
			if (t == 1) {
				l1 = 1;
			} else {
				l2 = 1;
			}
		}

		p = t;
	}

	ans = max(ans, min(l1, l2) * 2);

	cout << ans;
	
	return 0;
}
	