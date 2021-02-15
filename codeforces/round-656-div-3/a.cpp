#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		vector<int> a(3);
		for (auto &it : a) cin >> it;
		sort(a.begin(), a.end());
		if (a[1] != a[2]) {
			cout << "NO";
		} else {
			cout << "YES" << endl << a[0] << " " << a[0] << " " << a[2];
		}

		cout << endl;
	}
	
	return 0;
}
