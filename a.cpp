#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	double d, t, s;
	cin >> d >> t >> s;

	double tt = d / s;

	cout << (tt <= t ? "Yes" : "No");
	
	return 0;
}
