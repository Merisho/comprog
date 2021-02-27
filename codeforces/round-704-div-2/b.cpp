#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		vector<int> p(n + 1, -1);
		vector<int> pp(n);
		for (int i = 0; i < n; ++i) {
			int pi;
			cin >> pi;

			p[pi] = i;
			pp[i] = pi;
		}

		int l = n;
		for (int i = n; i > 0; --i) {
			if (p[i] >= l) {
				continue;
			}

			for (int j = p[i]; j < l; ++j) {
				cout << pp[j] << " ";
			}

			l = p[i];
		}

		cout << endl;
	}
	
	return 0;
}
