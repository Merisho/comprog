#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		ll u, v;
		cin >> u >> v;

		cout << -(u * u) << " " << (v * v) << endl;
	}
	
	return 0;
}
