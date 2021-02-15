#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int n;
		cin >> n;

		vector<int> h(n);
		for (int& hi : h) {
			cin >> hi;
		}

		int k = 0;
		for (int i = 1; i < n - 1; ++i) {
			if (h[i - 1] < h[i] && h[i + 1] < h[i]) {
				++k;
			}
		}

		cout << "Case #" << t << ": " << k << endl;
	}
	
	return 0;
}
	