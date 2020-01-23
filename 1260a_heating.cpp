#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int c, sum;
		cin >> c >> sum;

		int d = sum / c;
		int r = sum % c;
		int ans = d * d * (c - r) + (d + 1) * (d + 1) * r;

		cout << ans << endl;
	}
	
	return 0;
}
	