#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> p(n);
	for (int& pi : p) {
		cin >> pi;
	}

	int k = 0;
	for (int j = 0; j < n - 1; ++j) {
		for (int i = j + 1; i < n; ++i) {
			if (p[j] >= p[i]) {
				++k;
				break;
			}
		}
	}

	cout << k;
	
	return 0;
}
	