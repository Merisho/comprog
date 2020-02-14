#include <bits/stdc++.h>
using namespace std;

vector<int> a;

int maxDiff(int b) {
	int n = a.size();
	int m = 0;
	for (int i = 0; i < n - 1; ++i) {
		int l = a[i];
		int r = a[i + 1];
		if (l == -1) {
			l = b;
		}

		if (r == -1) {
			r = b;
		}

		m = max(m, abs(r - l));
	}

	return m;
}

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		a = vector<int>(n);
		for (int& ai : a) {
			cin >> ai;
		}

		int prev = -1;
		int l = -1;
		vector<int> s;
		for (int i = 0; i < n; ++i) {
			if (a[i] != -1) {
				if (l != -1) {
					s.push_back((a[i] + a[l]) / 2);
				}

				l = i;
			}
		}

		int ss = 0;
		for (int i = 0; i < s.size(); ++i) {
			ss += s[i];
		}

		if (s.size() != 0) {
			ss /= s.size();
		}

		int m = maxDiff(ss);

		cout << m << " " << ss << endl;
	}
	
	return 0;
}
	