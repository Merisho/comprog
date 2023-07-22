// Problem URL: https://codeforces.com/problemset/problem/4/C
#include <iostream>
#include <string>
#include <map>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;

	map<string, int> m;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;

		if (m[s] > 0) {
			cout << s << m[s];
		} else {
			cout << "OK";
		}

		++m[s];

		cout << endl;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_4c_registration_system_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
