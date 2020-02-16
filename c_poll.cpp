#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<string> s(n);
	map<string, int> sm;
	int m = 0;
	for (string& si : s) {
		cin >> si;
		if (sm.find(si) == sm.end()) {
			sm[si] = 1;
		} else {
			++sm[si];
		}

		m = max(m, sm[si]);
	}

	sort(s.begin(), s.end());

	for (string si : s) {
		if (sm[si] == m) {
			cout << si << endl;
			sm[si] = 0;
		}
	}
	
	return 0;
}
	