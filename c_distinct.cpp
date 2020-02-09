#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	set<int> s;
	bool ans = true;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;

		if (s.find(a) != s.end()) {
			ans = false;
			break;
		}

		s.insert(a);
	}

	if (ans) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}
	