#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int& ai : a) {
			cin >> ai;
		}

		int mn = 1e9 + 1;
		int mx = 0;
		for (int i = 1; i < n; ++i) {
			if (a[i] == -1 && a[i - 1] > -1) {
				mn = min(mn, a[i - 1]);
				mx = max(mx, a[i - 1]);
			} else if (a[i] > -1 && a[i - 1] == -1) {
				mn = min(mn, a[i]);
				mx = max(mx, a[i]);
			}
		}

		int k = (mn + mx) / 2;
		int md = 0;
		for (int i = 1; i < n; ++i) {
			int x = a[i - 1];
			int y = a[i];

			if (x == -1) {
				x = k;
			}

			if (y == -1) {
				y = k;
			}

			md = max(md, abs(x - y));
		}

		cout << md << " " << k << endl;
	}
	
	return 0;
}
	