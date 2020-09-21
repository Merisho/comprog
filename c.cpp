#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<int> c(n, 0);
	for (int i = 1; i < n; ++i) {
		for (int j = i; j < n; j += i) {
			++c[j];
		}
	}

	int s = 0;
	for (int ci : c) {
		s += ci;
	}

	cout << s;
	
	return 0;
}
