#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	set<int> s;
	for (int i = 1; i <= n; ++i) {
		s.insert(i);
	}

	for (int i = 0; i < k; ++i) {
		int d;
		cin >> d;
		for (int j = 0; j < d; ++j) {
			int a;
			cin >> a;
			s.erase(a);
		}
	}

	cout << s.size();
	
	return 0;
}
	