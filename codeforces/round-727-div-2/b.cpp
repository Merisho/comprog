#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, q;
	cin >> n >> q;

	string s;
	cin >> s;

	vector<int> p(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		p[i] = p[i - 1] + s[i - 1] - 'a' + 1;
	}

	for (int i = 0; i < q; ++i) {
		int l, r;
		cin >> l >> r;

		cout << (p[r] - p[l - 1]) << endl;
	}
	
	return 0;
}
