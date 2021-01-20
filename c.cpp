#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<int> a;
vector<pair<int, int>> ans;
vector<int> u;

bool f(vector<vector<pair<int, int>>>& b, int i, int c = 0) {
	if (c == n) {
		return true;
	}

	for (pair<int, int> p : b[i]) {
		if (u[p.first] || u[p.second]) {
			continue;
		}

		ans.push_back(p);
		
		u[p.first] = 1;
		u[p.second] = 1;
		if (f(b, p.second, c + 1)) {
			return true;
		}

		ans.pop_back();
		u[p.first] = 0;
		u[p.second] = 0;
	}

	return false;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		cin >> n;

		a.resize(2 * n);
		ans = vector<pair<int, int>>();
		u = vector<int>(2 * n, 0);
		for (int& ai : a) {
			cin >> ai;
		}

		sort(a.begin(), a.end());

		vector<vector<pair<int, int>>> b(a.size());

		for (int i = 0; i < 2 * n - 1; ++i) {
			a.push_back(a[2 * n - 1] + a[i]);
			b.push_back({ { i, 2 * n - 1 } });
		}

		for (int i = 2 * n - 1; i > 1; --i) {
			int l = 0;
			int r = i - 1;
			while (l < r) {
				int s = a[l] + a[r];
				if (s == a[i]) {
					b[i].push_back({ l, r });
					++l;
					--r;
				} else if (s > a[i]) {
					--r;
				} else {
					++l;
				}
			}
		}

		int ss = -1;
		for (int i = a.size() - 1; i >= 2 * n; --i) {
			if (f(b, i)) {
				ss = a[i];
				break;
			}
		}

		if (ss > -1) {
			cout << "YES" << endl;
			cout << ss << endl;
			for (pair<int, int> p : ans) {
				cout << a[p.first] << " " << a[p.second] << endl;
			}
		} else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}
