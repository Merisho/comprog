#include <bits/stdc++.h>
using namespace std;
using ll = long long;

map<int, vector<pair<int, int>>> rules;

struct rule {
	int a;
	int b;
	int c;
};

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;

		set<int> s;
		for (int i = 1; i <= n; ++i) {
			s.insert(i);
		}

		for (int i = 0; i < m; ++i) {
			int a, b, c;
			cin >> a >> b >> c;

			s.erase(b);
		}

		int x = *s.begin();
		for (int i = 1; i <= n; ++i) {
			if (i == x) {
				continue;
			}

			cout << i << " " << x << endl;
		}
	}
	
	return 0;
}
