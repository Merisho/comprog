#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	vector<int> pr(n + 1, 0);
	vector<int> pg(n + 1, 0);
	vector<int> pb(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		char c;
		cin >> c;
		s += c;

		pr[i] = pr[i - 1];
		pg[i] = pg[i - 1];
		pb[i] = pb[i - 1];
		if (c == 'R') {
			++pr[i];
		} else if (c == 'G') {
			++pg[i];
		} else {
			++pb[i];
		}
	}

	long long sum = 0;
	for (int i = 0; i < n - 2; ++i) {
		for (int j = i + 1; j < n - 1; ++j) {
			if (s[i] == s[j]) {
				continue;
			}

			if (s[i] == 'R' && s[j] == 'G' || s[i] == 'G' && s[j] == 'R') {
				sum += pb[n] - pb[j];
				if (s[j + j - i] == 'B') {
					--sum;
				}
			} else if (s[i] == 'R' && s[j] == 'B' || s[i] == 'B' && s[j] == 'R') {
				sum += pg[n] - pg[j];
				if (s[j + j - i] == 'G') {
					--sum;
				}
			} else {
				sum += pr[n] - pr[j];
				if (s[j + j - i] == 'R') {
					--sum;
				}
			}
		}
	}

	cout << sum;
	
	return 0;
}
	