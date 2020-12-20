#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		int d = i;
		bool s = false;
		while (!s && d > 0) {
			int r = d % 10;
			s = r == 7;
			d /= 10;
		}

		int o = i;
		while (!s && o > 0) {
			int r = o % 8;
			s = r == 7;
			o /= 8;
		}

		if (!s) {
			++ans;
		}
	}
	
	cout << ans;

	return 0;
}
