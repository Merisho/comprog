#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9;

int a[200001];

int find(int n, int start, int r) {
	if (a[start] % 2 != r) {
		return 0;
	}

	int p = start + a[start];
	int m = start - a[start];

	if (m > 0 && p <= n) {
		return 1 + min(find(n, m, r), find(n, p, r));
	}

	if (p <= n) {
		return 1 + find(n, p, r);
	}

	if (m > 0) {
		return 1 + find(n, m, r);
	}

	return INF;
}

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; ++i) {
		int ans = find(n, i, a[i] % 2);
		cout << (ans >= INF ? -1 : ans) << " ";
	}
	
	return 0;
}
	