#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> ans;
vector<string> a;
vector<pair<int, int>> o;
vector<pair<int, int>> z;
vector<int> tr;

void invert(vector<int>& coords) {
	for (int i = 0; i < coords.size(); i += 2) {
		int x = coords[i];
		int y = coords[i + 1];
		a[x][y] = (((a[x][y] - '0') + 1) % 2) + '0';
	}
}

void make_zero() {
	if (o.size() == 0) {
		return;
	}

	tr = vector<int>(6);
	if (o.size() == 3) {
		int i = 0;
		for (pair<int, int> p : o) {
			tr[i] = p.first;
			tr[i + 1] = p.second;
			i += 2;
		}

		ans.push_back(tr);

		o.clear();
	} else if (o.size() == 2) {
		tr[0] = o[1].first;
		tr[1] = o[1].second;
		tr[2] = z[0].first;
		tr[3] = z[0].second;
		tr[4] = z[1].first;
		tr[5] = z[1].second;
		ans.push_back(tr);
		
		auto z1 = z[0];
		auto z2 = z[1];

		z.pop_back();
		z.pop_back();
		z.push_back(o[1]);

		o.pop_back();
		o.push_back(z1);
		o.push_back(z2);
	} else if (o.size() == 1) {
		tr[0] = o[0].first;
		tr[1] = o[0].second;
		tr[2] = z[1].first;
		tr[3] = z[1].second;
		tr[4] = z[2].first;
		tr[5] = z[2].second;
		ans.push_back(tr);
		
		auto z1 = z[1];
		auto z2 = z[2];

		z.pop_back();
		z.pop_back();
		z.push_back(o[0]);

		o.pop_back();
		o.push_back(z1);
		o.push_back(z2);
	}

	invert(tr);

	return make_zero();
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		a = vector<string>(n);
		for (string& ai : a) {
			cin >> ai;
		}

		ans = vector<vector<int>>();
		
		for (int x = 0; x < n - 1; ++x) {
			for (int y = 0; y < m - 1; ++y) {
				o.clear();
				z.clear();
				for (int i = x; i <= x + 1; ++i) {
					for (int j = y; j <= y + 1; ++j) {
						if (a[i][j] == '1') {
							o.push_back({i, j});
						} else {
							z.push_back({i, j});
						}
					}
				}

				make_zero();
			}
		}

		cout << ans.size() << endl;
		for (vector<int> a : ans) {
			for (int aa : a) {
				cout << (aa + 1) << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
}
