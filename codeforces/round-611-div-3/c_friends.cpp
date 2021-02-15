#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> g;
	vector<bool> r(n);
	for (int i = 0; i < n; ++i) {
		r[i] = true;
	}

	vector<int> f(n);
	for (int i = 0; i < n; ++i) {
		int fi;
		cin >> fi;
		--fi;

		f[i] = fi;

		if (fi == -1) {
			g.push_back(fi);
		} else {
			r[fi] = false;
		}
	}

	vector<int> r1;
	for (int i = 0; i < n; ++i) {
		if (r[i] == true) {
			r1.push_back(i);
		}
	}

	sort(g.begin(), g.end());

	int t = r1[0];
	for (int i = 0; i < r1.size() - 1; ++i) {
		f[g[i]] = r1[i + 1];
	}
	f[g[g.size() - 1]] = t;

	for (int fi : f) {
		cout << fi + 1 << " ";
	}
	
	return 0;
}
	