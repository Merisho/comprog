#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n, m;
		cin >> n >> m;

		set<int> clr;
		set<int> clc;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				int c;
				cin >> c;
				if (c == 1) {
					clr.insert(i);
					clc.insert(j);
				}
			}
		}

		int rows = n - clr.size();
		int cols = m - clc.size();

		if (min(rows, cols) % 2 == 0) {
			cout << "Vivek";
		} else {
			cout << "Ashish";
		}

		cout << endl;
	}
	
	return 0;
}
	