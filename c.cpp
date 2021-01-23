#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, k;
		cin >> n >> k;

		for (int i = 1; i <= 2 * k - n - 1; ++i) {
			cout << i << " ";
		}

		for (int i = k; i >= 2 * k - n; --i) {
			cout << i << " ";
		}

		cout << endl;
	}
	
	return 0;
}
