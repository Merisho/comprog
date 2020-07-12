#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int n;
		cin >> n;

		vector<int> v(n + 1);
		v[n] = -1;
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
		}

		vector<int> vm(n + 1, -1);
		for (int i = 1; i <= n; ++i) {
			vm[i] = max(vm[i - 1], v[i - 1]);
		}

		int k = 0;
		for (int i = 0; i < n; ++i) {
			if (v[i] > vm[i] && v[i] > v[i + 1]) {
				++k;
			}
		}

		cout << "Case #" << t << ": " << k << endl;
	}
	
	return 0;
}
	