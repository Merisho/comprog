#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int x = (3 * (n * (n - 1) / 2)) / n;

		vector<int> s(n, 0);
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (x - s[i] >= 3) {
					s[i] += 3;
					cout << 1 << " ";
				} else if (x - s[i] > 0) {
					s[i] += 1;
					s[j] += 1;
					cout << 0 << " ";
				} else {
					s[j] += 3;
					cout << -1 << " ";
				}
			}
		}

		cout << endl;
	}
	
	return 0;
}
