#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int s = 0;
		int p;
		cin >> p;
		bool ok = false;
		for (int i = 1; i < n; ++i) {
			int a;
			cin >> a;
			if (a != p) {
				ok = true;
			}

			p = a;
		}

		if (ok) {
			cout << 1;
		} else {
			cout << n;
		}

		cout << endl;
	}
	
	return 0;
}
