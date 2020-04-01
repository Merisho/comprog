#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;

	int t = x / 500;
	int f = (x % 500) / 5;

	cout << (t * 1000 + 5 * f);
	
	return 0;
}
	