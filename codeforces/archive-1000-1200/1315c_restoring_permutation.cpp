#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> a(2 * n);
		set<int> ss;
		for (int i = 0; i < n; ++i) {
			int b;
			cin >> b;
			a[i * 2] = b;
			ss.insert(b);
		}

		bool v = true;
		for (int i = 0; i < 2 * n; i += 2) {
			int j = a[i] + 1;
			while (ss.count(j) == 1 && j < 2 * n + 1) {
				++j;
			}

			if (j < 2 * n + 1) {
				a[i + 1] = j;
				ss.insert(j);
			} else {
				v = false;
				break;
			}
		}

		if (!v) {
			cout << -1 << endl;
			continue;
		}

		for (int ai : a) {
			cout << ai << " ";
		}

		cout << endl;
	}
	
	return 0;
}
	