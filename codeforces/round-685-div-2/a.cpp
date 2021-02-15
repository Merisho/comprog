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
			cout << 0;
		} else if (n == 2) {
			cout << 1;
		} else if (n % 2 == 0 || n == 3) {
			cout << 2;
		} else {
			cout << 3;
		}

		cout << endl;
	}
	
	return 0;
}
