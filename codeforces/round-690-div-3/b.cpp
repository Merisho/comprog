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

		if (s.substr(0, 4) == "2020" || s.substr(n - 4, 4) == "2020") {
			cout << "YES";
		} else if (s.substr(0, 1) == "2" && s.substr(n - 3, 3) == "020") {
			cout << "YES";
		} else if (s.substr(0, 2) == "20" && s.substr(n - 2, 2) == "20") {
			cout << "YES";
		} else if (s.substr(0, 3) == "202" && s.substr(n - 1, 1) == "0") {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
