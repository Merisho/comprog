#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, s;
	cin >> n >> s;

	int m = s / n;
	int f = s - (m * (n - 1));

	map<int, bool> ks;
	for (int y = 0; y < 2; ++y) {
		for (int x = 0; x < n; ++x) {
			ks[m * x + f * y] = true;
		}
	}

	int ans = -1;
	for (int k = 0; k <= s; ++k) {
		if (!ks[k]) {
			ans = k;
		}
	}

	if (ans == -1) {
		cout << "NO";
		return 0;
	}

	cout << "YES" << endl;
	for (int i = 0; i < n - 1; ++i) {
		cout << m << " ";
	}

	cout << f << endl << ans;
	
	return 0;
}
