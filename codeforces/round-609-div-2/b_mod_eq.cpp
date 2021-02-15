#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	map<int, int> a;
	map<int, int> b;
	for (int i = 0; i < n; ++i) {
		int t;
		cin >> t;
		++a[t];
	}

	for (int i = 0; i < n; ++i) {
		int t;
		cin >> t;
		++b[t];
	}

	
	
	return 0;
}
	