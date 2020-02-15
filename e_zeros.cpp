#include <bits/stdc++.h>
using namespace std;

int l;
vector<int> n;
vector<int> a;

int f(int pos, int count, char cmp = '=') {
	int res = 0;

	if (count < 0 || cmp == '>') {
		return 0;
	}

	if (pos == l) {
		return (count == 0 && cmp != '>') ? 1 : 0;
	}
	
	for (int d = 0; d < 10; ++d) {
		a[pos] = d;
		if (d != 0) {
			--count;
		}

		if (cmp == '=') {
			if (a[pos] < n[pos]) {
				cmp = '<';
			} else if (a[pos] > n[pos]) {
				cmp = '>';
			}
		}

		res += f(pos + 1, count, cmp);

		if (d != 0) {
			++count;
		}
		a[pos] = 0;
	}

	return res;
}

int main() {
	string s;
	int k;

	cin >> s >> k;
	
	l = s.length();
	n = vector<int>(l);
	a = vector<int>(l);
	for (int i = 0; i < l; ++i) {
		n[i] = s[i] - '0';
		a[i] = 0;
	}

	cout << f(0, k);
	
	return 0;
}
	