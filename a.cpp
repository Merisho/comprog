#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		int x = -1, y = -1, z = -1;
		for (int i = 0; i < 100; ++i) {
			for (int j = 0; j < 100; ++j) {
				for (int l = 0; l < 100; ++l) {
					if (3 * i + 5 * j + 7 * l == n) {
						x = i;
						y = j;
						z = l;
						break;
					}
				}
			}
		}

		if (x == -1) {
			cout << -1;
		} else {
			cout << x << " " << y << " " << z;
		}

		cout << endl;
	}
	
	return 0;
}
