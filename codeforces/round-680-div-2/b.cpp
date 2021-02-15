#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		cout << max(a + b, c + d) << endl;
	}
	
	return 0;
}
