#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int n;
		long long d;
		cin >> n >> d;

		vector<long long> x(n);
		for (long long& xi : x) {
			cin >> xi;
		}

		long long p = (d / x[n - 1]) * x[n - 1];
		for (int i = n - 2; i >= 0; --i) {
			p = (p / x[i]) * x[i];
		}

		cout << "Case #" << t << ": " << p << endl;
	}
	
	return 0;
}
	