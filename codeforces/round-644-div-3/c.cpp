#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		vector<int> e;
		vector<int> o;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;

			if (a % 2 == 0) {
				e.push_back(a);
			} else {
				o.push_back(a);
			}
		}

		if (e.size() % 2 == 0) {
			cout << "YES" << endl;
			continue;
		}

		bool ok = false;
		for (int ei : e) {
			for (int oi : o) {
				if (abs(ei - oi) == 1) {
					ok = true;
					break;
				}
			}

			if (ok) {
				break;
			}
		}

		cout << (ok ? "YES" : "NO") << endl;
	}
	
	return 0;
}
	