// Problem URL: https://codeforces.com/problemset/problem/1097/B
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using ld = long double;

bool f(vector<int>& a, int i = 0, int pos = 0) {
	if (i == a.size()) {
		return pos % 360 == 0;
	}

	return f(a, i + 1, pos + a[i]) || f(a, i + 1, pos - a[i]);
}

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}

	cout << (f(a) ? "YES" : "NO") << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_1097b_input.txt", "r", stdin);
    #endif

	solve();

	return 0;
}
