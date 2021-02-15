#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<long long> L(n, 0);
	vector<long long> R(n, 0);
	for (int i = 1; i <= n; ++i) {
		int a;
		cin >> a;

		int l = i + a;
		if (l < n) {
			++L[l];
		}

		int r = i - a;
		if (r > 0) {
			++R[r];
		}
	}

	long long s = 0;
	for (int i = 2; i < n; ++i) {
		s += L[i] * R[i];
	}

	cout << s;

	return 0;
}
