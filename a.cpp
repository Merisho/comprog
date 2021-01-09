#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int w, h, n;
		cin >> w >> h >> n;

		int a = 1;
		while (w % 2 == 0) {
			w /= 2;
			a *= 2;
		}

		int b = 1;
		while (h % 2 == 0) {
			h /= 2;
			b *= 2;
		}

		cout << (a * b >= n ? "YES" : "NO") << endl;
	}
	
	return 0;
}
