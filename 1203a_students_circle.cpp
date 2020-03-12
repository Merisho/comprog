#include <bits/stdc++.h>
using namespace std;

int main() {
	int Q;
	cin >> Q;

	for (int q = 0; q < Q; ++q) {
		int n;
		cin >> n;

		vector<int> p(n);
		int o = -1;
		for (int i = 0; i < n; ++i) {
			int pi;
			cin >> pi;

			p[i] = pi;

			if (pi == 1) {
				o = i;
			}
		}

		bool ans = true;
		for (int i = o + 1; i != o; i = (i + 1) % n) {
			if (p[i] - p[i - 1] != 1) {
				ans = false;
				break;
			}
		}

		if (ans) {
			cout << "YES" << endl;
			return 0;
		}

		for (int i = o - 1; i != o; i = (i - 1 < 0 ? n - 1 : i - 1)) {
			if (p[i] - p[i + 1] != 1) {
				ans = false;
				break;
			}
		}

		if (ans) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	