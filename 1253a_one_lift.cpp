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

		vector<int> d(n + 2, 0);
		for (int i = 0; i < n; ++i) {
			int b;
			cin >> b;
			d[i + 1] = b - a[i];
		}

		int prev = 0;
		int l = 0;
		for (int i = 0; i < n + 2; ++i) {
			int di = d[i];
			if (di < 0) {
				l = 3;
				break;
			}

			if (di != prev) {
				++l;
				prev = di;
			}
		}

		if (l < 3) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
