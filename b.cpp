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
		for (int i = 1; i <= 2 * n; ++i) {
			int a;
			cin >> a;

			if (a % 2 == 0) {
				e.push_back(i);
			} else {
				o.push_back(i);
			}
		}

		if (e.size() % 2 == 0 && o.size() % 2 == 0) {
			if (o.size() > 0) {
				o.erase(o.begin());
				o.erase(o.begin());
			} else {
				e.erase(e.begin());
				e.erase(e.begin());
			}
		}

		for (int i = 1; i < e.size(); i += 2) {
			cout << e[i - 1] << " " << e[i] << endl;
		}

		for (int i = 1; i < o.size(); i += 2) {
			cout << o[i - 1] << " " << o[i] << endl;
		}
	}
	
	return 0;
}
	