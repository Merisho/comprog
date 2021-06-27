#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	cout << max(max(a + b, a + c), b + c);
	
	return 0;
}
