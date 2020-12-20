#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int h, w;
	cin >> h >> w;

	vector<vector<int>> a(h, vector<int>(w));
	int mn = 1e9;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			int ai;
			cin >> ai;

			mn = min(mn, ai);
			a[i][j] = ai;
		}
	}

	int s = 0;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			s += a[i][j] - mn;
		}
	}

	cout << s;
	
	return 0;
}
