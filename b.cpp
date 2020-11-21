#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<int> c(1001, 0);
	int m = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		for (int k = 2; k <= a; ++k) {
			if (a % k == 0) {
				++c[k];
				if (c[k] > m) {
					m = c[k];
					ans = k;
				}
			}
		}
	}

	cout << ans;
	
	return 0;
}
