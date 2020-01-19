#include <bits/stdc++.h>
using namespace std;

long long f(long long d, long long x) {
	int a = d / (x + 1);
	if (d % (x + 1) != 0) {
		++a;
	}

	return x + a;
}

long long find(long long d) {
	long long l = 2;
	long long r = d - 1;
	long long ans = f(d, 1);
	while (l <= r) {
		long long m = l + (r - l) / 2;
		long long res = f(d, m);
		if (res < f(d, m - 1)) {
			ans = res;
			l = m + 1;
		} else {
			r = m - 1;
		}
	}

	return ans;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		long long n, d;
		cin >> n >> d;

		if (d <= n || find(d) <= n) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
	