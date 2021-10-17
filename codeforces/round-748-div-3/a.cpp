#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int v[3];
		for (int i = 0; i < 3; ++i) {
			cin >> v[i];
		}

		for (int i = 0; i < 3; ++i) {
			int mx = -1e9;
			for (int j = 0; j < 3; ++j) {
				if (i == j) {
					continue;
				}

				mx = max(mx, v[j] - v[i]);
			}

			if (mx < 0) {
				cout << 0;
			} else {
				cout << (mx + 1);
			}

			cout << " ";
		}

		cout << endl;
	}
	
	return 0;
}
