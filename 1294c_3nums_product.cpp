#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int a = -1;
		for (int i = 2; i < sqrt(n); ++i) {
			if (n % i == 0) {
				n /= i;
				a = i;
				break;
			}
		}

		if (a == -1) {
			cout << "NO" << endl;
			continue;
		}

		int b = -1;
		for (int i = 2; i < sqrt(n); ++i) {
			if (n % i == 0 && i != a) {
				n /= i;
				b = i;
				break;
			}
		}

		if (b == -1) {
			cout << "NO" << endl;
			continue;
		}

		cout << "YES" << endl;
		cout << a << " " << b << " " << n << endl;
	}
	
	return 0;
}
	