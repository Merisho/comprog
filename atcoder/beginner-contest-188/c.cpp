#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<int, int> f(vector<pair<int, int>>& p) {
	if (p.size() == 2) {
		if (p[0].first < p[1].first) {
			return p[0];
		}

		return p[1];
	}

	vector<pair<int, int>> pp;
	for (int i = 0; i < p.size() - 1; i += 2) {
		if (p[i].first < p[i + 1].first) {
			pp.push_back(p[i + 1]);
		} else {
			pp.push_back(p[i]);
		}
	}

	return f(pp);
}

int main() {
	int n;
	cin >> n;

	vector<pair<int, int>> p;
	int m = 1<<n;
	for (int i = 1; i <= m; ++i) {
		int a;
		cin >> a;

		p.push_back({a, i});
	}

	cout << f(p).second;
	
	return 0;
}
