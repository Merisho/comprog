#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<bool> p(n + 1);
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
		} else {
			++wa;
		}
	}

	cout << ac << " " << wa;
	
	return 0;
}
	