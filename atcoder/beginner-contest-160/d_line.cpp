#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin >> n >> x >> y;

	vector<int> d(n, 0);
	for (int i = 1; i <= n; ++i) {
		for (int j = i + 1; j <= n; ++j) {
			int m = j - i;
			m = min(m, abs(x - i) + abs(y - j) + 1);
			++d[m];
		}
	}

	for (int i = 1; i < n; ++i) {
		cout << d[i] << endl;
	}
	
	return 0;
}
	