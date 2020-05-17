#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int r, c;
		cin >> r >> c;

		char w[r][c];
		for (int i = 0; i < r; ++i) {
			for (int j = 0; j < c; ++j) {
				cin >> w[i][j];
			}
		}

		vector<int> h(26, -1);
		vector<int> b(26, -1);
		for (int i = 0; i < c; ++i) {
			for (int j = 0; j < r; ++j) {
				int p = w[j][i] - 'A';
				if (h[p] == -1) {
					h[p] = 0;
					b[p] = 0;
				}

				if (j < r - 1) {
					++h[p];
				}

				if (j > 0) {
					++b[p];
				}
			}
		}

		int sb = 0;
		int sh = 0;
		vector<pair<int, int>> p;
		for (int i = 0; i < 26; ++i) {
			if (h[i] == -1) {
				continue;
			}

			sb += b[i];
			sh += h[i];

			p.push_back({ b[i] - h[i], i });
		}

		if (sb != sh) {
			cout << "Case #" << t << ": " << -1 << endl;
			continue;
		}

		sort(p.begin(), p.end(), greater<pair<int, int>>());
		cout << "Case #" << t << ": ";
		for (int i = 0; i < p.size(); ++i) {
			cout << char(p[i].second + 'A');
		}

		cout << endl;
	}
	
	return 0;
}
	