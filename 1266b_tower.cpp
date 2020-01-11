#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		long long x;
		cin >> x;

		if (x < 15) {
			cout << "NO" << endl;
			continue;
		}

		long long y = x / 14;
		long long d = x - y * 14;
		if (d > 0 && d < 7) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	