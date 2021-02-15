#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int n;
		string s;
		cin >> n >> s;

		stack<char> b;
		for (int i = 0; i < n; ++i) {
			if (s[i] == ')' && b.size() > 0 && b.top() == '(') {
				b.pop();
			} else {
				b.push(s[i]);
			}
		}

		cout << (b.size() / 2) << endl;
	}
	
	return 0;
}
	