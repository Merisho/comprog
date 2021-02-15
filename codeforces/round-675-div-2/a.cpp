#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll a, b, c;
		cin >> a >> b >> c;

		cout << (a + b + c - 1) << endl;
	}
	
	return 0;
}
