#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		ll a, b, n, m;
		cin >> a >> b >> n >> m;
	
		if (a + b < n + m) {
			cout << "No" << endl;
			continue;
		}

		ll mn = min(a, b);
		if (mn >= m) {
			cout << "Yes";
		} else {
			cout << "No";
		}

		cout << endl;
	}
	
	return 0;
}
	