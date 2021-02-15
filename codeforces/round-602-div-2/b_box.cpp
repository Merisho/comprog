#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int ti = 0; ti < t; ++ti) {
		int n;
		cin >> n;

		vector<int> q(n);
		for (int& qi : q) {
			cin >> qi;
		}

		if (n == 1 && q[0] > 1) {
			cout << -1 << endl;
			continue;
		} 

		bool ok = true;
		bool used[100000] = { false };
		vector<int> p(n);
		p[0] = q[0];
		used[p[0]] = true;
		for (int i = 1; i < n; ++i) {
			if (q[i] > q[i - 1]) {
				p[i] = q[i];
				used[p[i]] = true;
			} else {
				int k = 0;
				int l;
				for (int j = 1; j < q[i]; ++j) {
					if (!used[j]) {
						++k;
						l = j;
					}
				}

				if (k != 1) {
					ok = false;
					break;
				}

				used[l] = true;
				p[i] = l;
			}
		}

		if (!ok) {
			cout << -1 << endl;
			continue;
		}

		for (int pi : p) {
			cout << pi << " ";
		}

		cout << endl;
	}
	
	return 0;
}
	