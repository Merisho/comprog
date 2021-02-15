#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
		cin >> n;

		string s;
		cin >> s;

		int i = s.length() - 1;
		int k = 0;
		while (i >= 0 && s[i] == ')') {
			++k;
			--i;
		}

		int r = s.length() - k;
		if (k > r) {
			cout << "Yes";
		} else {
			cout << "No";
		}

		cout << endl;
	}
	
	return 0;
}
