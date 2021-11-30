#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int a1, a2, a3;
		cin >> a1 >> a2 >> a3;

		int ans = abs(a1 + a3 - 2 * a2) % 3;
		cout << (ans == 2 ? 1 : ans) << endl;
	}
	
	return 0;
}
