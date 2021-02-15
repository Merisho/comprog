#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> c;
vector<int> d;
vector<int> a;
vector<int> b;

vector<int> cc;
int f(int i, int k, int m) {
	if (i == k) {
		int res = 0;
		for (int j = 0; j < m; ++j) {
			if (cc[a[j]] > 0 && cc[b[j]] > 0) {
				++res;
			}
		}

		return res;
	}

	++cc[c[i]];
	int x = f(i + 1, k, m);
	--cc[c[i]];

	++cc[d[i]];
	int y = f(i + 1, k, m);
	--cc[d[i]];

	return max(x, y);
}

int main() {
	int n, m;
	cin >> n >> m;

	cc = vector<int>(n + 1, 0);
	a = vector<int>(m);
	b = vector<int>(m);
	for (int i = 0; i < m; ++i) {
		cin >> a[i] >> b[i];
	}

	int k;
	cin >> k;

	c = vector<int>(k);
	d = vector<int>(k);

	for (int i = 0; i < k; ++i) {
		cin >> c[i] >> d[i];
	}

	int ans = f(0, k, m);

	cout << ans;
	
	return 0;
}
