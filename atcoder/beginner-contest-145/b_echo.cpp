#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;

	cin >> n >> s;

	int m = n / 2;
	cout << (s.substr(0, m) == s.substr(m, m) && n % 2 == 0 ? "Yes" : "No" );
	
	return 0;
}
	