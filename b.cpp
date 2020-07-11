#include <bits/stdc++.h>
using namespace std;

int pw(int a, int e) {
	int r = 1;
	for (int i = 0; i < e; ++i) {
		r *= a;
	}

	return r;
}

int max_div(int n) {
	int m = n;
	int maxd = 0;
	int maxd_count = 0;
	for (int i = 2; i * i <= n; ++i) {
		int k = 0;
		while (n % i == 0) {
			n /= i;
			++k;
		}

		if (pw(i, k) >= pw(maxd, maxd_count)) {
			maxd = i;
			maxd_count = k;
		}
	}

	int res = pw(maxd, maxd_count);
	if (res == m) {
		res /= maxd;
	}

	res = max(res, n);

	return res;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		if (n % 2 == 0) {
			int m = n / 2;
			cout << m << " " << m << endl;
			continue;
		}

		int d = max_div(n);
		cout << d << " " << (n - d) << endl;
	}
	
	return 0;
}
	