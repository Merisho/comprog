#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, k;
	cin >> a >> b >> c >> k;
	
	int m = min(a, k);
	int s = m;
	k -= m;

	m = min(b, k);
	k -= m;

	m = min(c, k);
	s -= m;
	k -= m;

	cout << s;

	return 0;
}
	