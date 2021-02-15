#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int n;
	cin >> n;

	ll k;
	cin >> k;

	vector<int> a(n);
	for (int& ai : a) {
		cin >> ai;
		--ai;
	}

	vector<int> p(n, -1);
	ll c = 0;
	int curr = 0;
	p[curr] = 0;
	int next = a[curr];
	while (c < k) {
		curr = next;
		next = a[curr];
		++c;

		if (p[curr] != -1) {
			break;
		} else {
			p[curr] = c;
		}
	}

	ll d = c - p[curr];
	k -= c;

	for (int i = 0; i < k % d; ++i) {
		curr = next;
		next = a[curr];
	}

	cout << (curr + 1);
	
	return 0;
}
	