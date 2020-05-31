#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;

	vector<pair<long long, long long>> ab(n);
	for (long long i = 0; i < n; ++i) {
		cin >> ab[i].first;
		cin >> ab[i].second;
	}

	sort(ab.begin(), ab.end());

	if (n % 2 == 1) {
		long long a = ab[n / 2].first;
		long long b = ab[n / 2].second;

		long long s = b - a + 1;
		cout << s;
	} else {
		long long a1 = ab[n / 2 - 1].first;
		long long b1 = ab[n / 2 - 1].second;
		long long a2 = ab[n / 2].first;
		long long b2 = ab[n / 2].second;

		long long s1 = a1 + a2;
		long long s2 = b1 + b2;

		long long s = s2 - s1 + 1;
		cout << s;
	}
	
	return 0;
}
	