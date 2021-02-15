#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		cout << 2 << endl;
		cout << (n - 1) << " " << n << endl;
		for (int i = n - 2; i > 0; --i) {
			cout << i << " " << (i + 2) << endl;
		}
	}
	
	return 0;
}
