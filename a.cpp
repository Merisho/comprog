#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	for (int t = 0; t < T; ++t) {
		long long a, b, c, d;
		cin >> a >> b >> c >> d;

		if (b >= a) {
			cout << b << endl;
			continue;
		}

		if (d >= c) {
			cout << -1 << endl;
			continue;
		}

		long long e = c - d;
		long long r = b + c * ((a - b + e - 1) / e);
		cout << r << endl;
	}
	
	return 0;
}
	