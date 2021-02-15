#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		long long n, a, b;
		cin >> n >> a >> b;

		if (n >= a && n <= b) {
			cout << "YES" << endl;
			continue;
		}

		long long x = n / a;
		long long y = n / b;
		if (n % b != 0) {
			++y;
		}

		if (x == y) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	