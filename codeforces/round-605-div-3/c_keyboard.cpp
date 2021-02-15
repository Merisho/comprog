#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	char s[n];
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
	}

	bool allowed[26] = { false };
	for (int i = 0; i < k; ++i) {
		char c;
		cin >> c;
		allowed[c - 'a'] = true;
	}

	long long m = 0;
	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		if (allowed[s[i] - 'a']) {
			++m;
		} else {
			sum += m * (m + 1) / 2;
			m = 0;
		}
	}

	if (m != 0) {
		sum += m * (m + 1) / 2;
	}

	cout << sum;
	
	return 0;
}
	