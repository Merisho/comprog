// Problem URL: https://codeforces.com/problemset/problem/276/B
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	string s;
	cin >> s;

	vector<int> cnt(26, 0);
	for (char c : s) {
		++cnt[c - 'a'];
	}

	int odd = 0;
	for (int c : cnt) {
		odd += c % 2;
	}

	cout << (odd > 0 && odd % 2 == 0 ? "Second" : "First") << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_276b_little_girl_and_game_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
