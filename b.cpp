#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int k;
		cin >> k;

		vector<int> a(k);
		for (int i = 0; i < k; ++i) {
			cin >> a[i];
		}

		vector<int> b(k);
		if (a[0] > a[1]) {
			b[0] = 4;
		} else {
			b[0] = 1;
		}

		int ans = 0;
		for (int i = 1; i < k; ++i) {
			if (a[i] > a[i - 1]) {
				b[i] = b[i - 1] + 1;
			} else if (a[i] < a[i - 1]) {
				b[i] = b[i - 1] - 1;
			} else {
				b[i] = b[i - 1];
			}

			if (b[i] > 4 || b[i] < 1) {
				++ans;
				if (i < k - 1) {
					if (a[i] > a[i + 1]) {
						b[i] = 4;
					} else {
						b[i] = 1;
					}
				} else {
					b[i] = b[i - 1];
				}
			}
		}

		cout << "Case #" << t << ": " << ans << endl;
	}

	return 0;
}
	