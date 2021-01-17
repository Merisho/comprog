#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		if (n == 1) {
			cout << 9 << endl;
			continue;
		}

		cout << 98;
		for (int i = 2; i < n; ++i) {
			cout << (7 + i) % 10;
		}

		cout << endl;
	}
	
	return 0;
}
