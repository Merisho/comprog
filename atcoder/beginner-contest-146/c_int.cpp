#include <bits/stdc++.h>
using namespace std;

long long d(long long n) {
	return log10(n) + 1;
}

int main() {
	long long a, b, x;
	cin >> a >> b >> x;

	long long start = 1;
	long long end = 1e9;
	long long ans = 0;
	while (start <= end) {
		long long m = (start + end) / 2;

		if (a * m + b * d(m) > x) {
			end = m - 1;
		} else {
			ans = m;
			start = m + 1;
		}
	}

	cout << ans;
	
	return 0;
}
	