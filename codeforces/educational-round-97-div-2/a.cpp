#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int l, r;
		cin >> l >> r;

		if (r / l > 1) {
			cout << "NO";
		} else {
			cout << "YES";
		}

		cout << endl;
	}
	
	return 0;
}
