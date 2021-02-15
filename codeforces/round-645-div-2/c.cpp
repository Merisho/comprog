#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		long long x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		long long ans = (x2 - x1) * (y2 - y1) + 1;
		cout << ans << endl;
	}
	
	return 0;
}
	