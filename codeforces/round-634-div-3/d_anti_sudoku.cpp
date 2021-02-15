#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int f[9][9];
		for (int r = 0; r < 9; ++r) {
			for (int c = 0; c < 9; ++c) {
				char n;
				cin >> n;
				f[r][c] = n - '0';
			}
		}

		for (int r = 0; r < 9; ++r) {
			int c = (r % 3) * 3 + r / 3;
			if (f[r][c] == 9) {
				f[r][c] = 1;
			} else {
				++f[r][c];
			}
		}

		for (int r = 0; r < 9; ++r) {
			for (int c = 0; c < 9; ++c) {
				cout << f[r][c];
			}
			cout << endl;
		}
	}
	
	return 0;
}
	