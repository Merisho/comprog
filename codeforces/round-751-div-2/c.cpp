#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> b(31, 0);
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			int k = 0;
			while(a) {
				b[k] += a % 2;
				a >>= 1;
				++k;
			}
		}

		for (int k = 1; k <= n; ++k) {
			bool ok = true;
			for (int i = 0; i < 31; ++i) {
				if (b[i] % k != 0) {
					ok = false;
					break;
				}
			}

			if (ok) {
				cout << k << " ";
			}
		}

		cout << endl;
	}
	
	return 0;
}
