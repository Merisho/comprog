#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<bool> p(n + 1, false);
	vector<int> w(n + 1, 0);
	int wa = 0;
	int ac = 0;
	for (int i = 0; i < m; ++i) {
		int pi;
		string si;

		cin >> pi >> si;

		if (p[pi]) {
			continue;
		}

		if (si == "AC") {
			p[pi] = true;
			++ac;
			wa += w[pi];
		} else {
			++w[pi];
		}
	}

	cout << ac << " " << wa;
	
	return 0;
}
	