#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		long long n, a, b;
		cin >> n >> a >> b;

		if (n < a) {
			cout << "NO" << endl;
			continue;
		}

		if (n <= b) {
			cout << "YES" << endl;
			continue;
		}

		long long l = n % a;
		long long k = n / a;

		if (l == 0 || k > 1) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	