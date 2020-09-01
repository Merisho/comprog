#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int MAX = 1e6;

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	map<int, int> count;
	for (int& ai : a) {
		cin >> ai;
		++count[ai];
	}

	vector<bool> p(MAX + 1, true);
	bool pairwise = true;
	for (int i = 2; i <= MAX; ++i) {
		if (!p[i]) {
			continue;
		}

		int k = count[i];
		for (int j = i * 2; j <= MAX; j += i) {
			p[j] = false;
			k += count[j];
		}

		if (k > 1) {
			pairwise = false;
			break;
		}
	}

	if (pairwise) {
		cout << "pairwise coprime" << endl;
		return 0;
	}

	int g = gcd(a[0], a[1]);
	for (int i = 2; i < n; ++i) {
		g = gcd(g, a[i]);
	}

	if (g == 1) {
		cout << "setwise coprime" << endl;
		return 0;
	}

	cout << "not coprime";
	
	return 0;
}
