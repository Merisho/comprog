#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> a(n);
		int l = 1e9;
		int r = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (a[i] != (i + 1)) {
				l = min(l, i);
				r = max(r, i);
			}
		}

		int b = false;
		for (int i = l; i <= r; ++i) {
			if (a[i] == (i + 1)) {
				b = true;
				break;
			}
		}

		if (l == 1e9 && r == 0) {
			cout << 0;
		} else if (!b) {
			cout << 1;
		} else {
			cout << 2;
		}

		cout << endl;
	}
	
	return 0;
}
	