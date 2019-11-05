#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
	int n;
	long long k;
	cin >> n >> k;

	vector<long long> a(n);
	long long s = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		s += a[i];
	}

	vector<long long> f(n);
	int fmin = 1e6 + 1;
	for (int i = 0; i < n; ++i) {
		cin >> f[i];
		if (f[i] < fmin) {
			fmin = f[i];
		}
	}

	sort(a.begin(), a.end());
	sort(f.begin(), f.end());

	long long start = 0;
	long long end = 1e12;
	while (start < end) {
		long long lim = (start + end) / 2;
		long long count = 0;
		for (int i = 0; i < n; ++i) {
			if (a[i] * f[n - i - 1] > lim) {
				count += a[i] - lim / f[n - i - 1];
			}
		}

		if (count <= k) {
			end = lim;
		}
		else {
			start = lim + 1;
		}
	}

	cout << end;

	return 0;
}
