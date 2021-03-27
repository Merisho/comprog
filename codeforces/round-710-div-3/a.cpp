#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll n, m, x;
		cin >> n >> m >> x;

		ll c = (x - 1) / n;
		ll r = x - 1 - n * c;

		cout << (m * r + c + 1) << endl;
	}
	
	return 0;
}
