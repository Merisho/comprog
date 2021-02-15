#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		long long n, g, b;
		cin >> n >> g >> b;

		if (g >= b) {
			cout << n << endl;
			continue;
		}

		long long r = (n / g) * (g + b) + n % g;
		r = (r + 1) / 2;
		cout << r << endl;
	}
	
	return 0;
}
	