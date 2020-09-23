#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int MOD = 1e9 + 7;

int main() {
	int T;
	cin >> T;
	
	vector<ll> c(2e6 + 1, 0);
	for (int i = 3; i <= 2e6; ++i) {
		int k = i % 3 == 0 ? 4 : 0;
		c[i] = (c[i - 2] * 2 + c[i - 1] + k) % MOD;
	}

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;
		cout << c[n] << endl;
	}
	
	return 0;
}