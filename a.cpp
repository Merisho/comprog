#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		long long n;
		cin >> n;

		long long d = (4 * n - 2) / 2;
		long long ans = (d + 1) / 2;
		cout << ans << endl;
	}
	
	return 0;
}
	