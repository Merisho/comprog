#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int p;
		cin >> p;
		bool s = true;
		for (int i = 1; i < n; ++i) {
			int a;
			cin >> a;

			if (p > a) {
				s = false;
			}

			p = a;
		}

		int z = 0;
		for (int i = 0; i < n; ++i) {
			int b;
			cin >> b;

			if (b == 0) {
				++z;
			}
		}

		if (s || (z > 0 && z < n)) {
			cout << "Yes";
		} else {
			cout << "No";
		}

		cout << endl;
	}
	
	return 0;
}
	