#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	set<string> u;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;

		u.insert(s);
	}

	cout << u.size();
	
	return 0;
}
	