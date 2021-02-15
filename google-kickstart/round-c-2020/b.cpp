#include <bits/stdc++.h>
using namespace std;

vector<set<int>> d;
vector<bool> vis(26, false);
vector<int> anc;

void case_ans(int t) {
	cout << "Case #" << t << ": ";
}

bool dfs(int p, int i) {
	if (vis[p]) {
		return false;
	}

	anc[p] += i;
	vis[p] = true;

	bool ok = true;
	for (int c : d[p]) {
		ok = dfs(c, i + 1);
		if (!ok) {
			break;
		}
	}

	vis[p] = false;

	return ok;
}

int main() {
	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		d = vector<set<int>>(26);
		anc = vector<int>(26, 0);
		
		int R, C;
		cin >> R >> C;

		set<char> r;
		int w[R][C];
		for (int i = 0; i < R; ++i) {
			for (int j = 0; j < C; ++j) {
				char p;
				cin >> p;
				w[i][j] = p - 'A';
				r.insert(w[i][j]);
			}
		}

		for (int i = 0; i < C; ++i) {
			for (int j = 1; j < R; ++j) {
				int c = w[j - 1][i];
				int p = w[j][i];
				if (c != p) {
					r.erase(c);
					d[p].insert(c);
				}
			}
		}

		if (r.size() == 0) {
			case_ans(t);
			cout << -1 << endl;
			continue;
		}

		bool ok = true;
		for (int ri : r) {
			ok = dfs(ri, 1);
			if (!ok) {
				break;
			}
		}

		if (!ok) {
			case_ans(t);
			cout << -1 << endl;
			continue;
		}

		vector<pair<int, char>> a;
		for (int i = 0; i < 26; ++i) {
			if (anc[i] != 0) {
				a.push_back({ anc[i], i + 'A' });
			}
		}

		sort(a.begin(), a.end());

		case_ans(t);
		for (pair<int, char> ai : a) {
			cout << ai.second;
		}

		cout << endl;
	}
	
	return 0;
}
