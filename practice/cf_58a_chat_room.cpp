// Problem URL: https://codeforces.com/problemset/problem/58/A
#include <iostream>
#include <string>
using namespace std;
using ll = long long;

void solve() {
	string s;
	cin >> s;

	string hello = "hello";
	int h = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == hello[h]) {
			++h;

			if (h == hello.length()) {
				break;
			}
		}
	}

	cout << (h == hello.length() ? "YES" : "NO") << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_58a_chat_room_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
