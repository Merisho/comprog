#include <bits/stdc++.h>
using namespace std;

vector<int> g[100000];
int c[100000] = { 0 };

void paint(int v, int prevColor) {
	int curr = 1;

	for (int i = 0; i < g[v].size(); ++i) {
		if (curr == prevColor) {
			++curr;
		}

		c[g[v][i]] = curr;
		++curr;

		paint(g[v][i], curr - 1);
	}
}

int main() {
	int n;
	cin >> n;

	vector<int> l;
	for (int i = 0; i < n - 1; ++i) {
		int a, b;
		cin >> a >> b;

		g[a - 1].push_back(b - 1);
		l.push_back(b - 1);
	}

	paint(0, 0);

	int m = 0;
	for (int i = 1; i < n; ++i) {
		m = max(m, c[i]);
	}

	cout << m << endl;

	for (int li : l) {
		cout << c[li] << endl;
	}
	
	return 0;
}
	