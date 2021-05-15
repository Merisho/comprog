#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k1, k2;
		cin >> n >> k1 >> k2;

		int w, b;
		cin >> w >> b;

		int ww = k1 / 2 + k2 / 2;
		if (k1 % 2 == 1 && k2 % 2 == 1) {
			++ww;
		}

		int kk1 = n - k1;
		int kk2 = n - k2;
		int bb = kk1 / 2 + kk2 / 2;
		if (kk1 % 2 == 1 && kk2 % 2 == 1) {
			++bb;
		}

		if (ww >= w && bb >= b) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
