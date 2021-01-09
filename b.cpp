#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int o = 0;
		int t = 0;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if (a == 2) {
				++t;
			} else {
				++o;
			}
		}

		int s = 2 * t + o;

		if (s % 2 == 1 || o == 0 && t % 2 == 1) {
			cout << "NO" << endl;
			continue;
		}

		cout << "YES" << endl;
	}
	
	return 0;
}
