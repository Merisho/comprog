#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		if (k == 1) {
			cout << 1 << endl;
			continue;
		}

		if (n == k) {
			for (int i = 1; i <= k; ++i) {
				cout << i << " ";
			}
		} else {
			for (int i = 1; i <= k - 2; ++i) {
				cout << i << " ";
			}

			cout << k << " " << (k - 1);
		}

		cout << endl;
	}
	
	return 0;
}
