#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int a, b;
		cin >> a >> b;

		int c = a & b;

		cout << ((a ^ c) + (b ^ c)) << endl;
	}

	return 0;
}
