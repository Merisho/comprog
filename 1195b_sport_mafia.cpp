#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;

	long long l = 1;
	long long r = n;
	while (l < r) {
		long long m = l + (r - l) / 2;
		long long s = m * (m + 1) / 2;
		if (s - n + m >= k) {
			r = m;
		} else {
			l = m + 1;
		}
	}

	cout << (n - r);
	
	return 0;
}
	