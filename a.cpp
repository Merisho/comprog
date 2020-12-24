#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int a, b, c;

		cin >> a >> b >> c;

		int s = a + b + c;
		cout << (s % 9 == 0 && min(min(a, b), c) >= s / 9 ? "YES" : "NO") << endl;
	}
	
	return 0;
}
