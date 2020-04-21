#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> m(n, 0);
	for (int i = 0; i < n - 1; ++i) {
		int a;
		cin >> a;

		++m[a - 1];
	}

	for (int s : m) {
		cout << s << endl;
	}
	
	return 0;
}
	