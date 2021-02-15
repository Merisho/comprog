#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
	return a == 0 ? b : gcd(b % a, a);
}

int main() {
	long long a, b;
	cin >> a >> b;

	cout << (a * b) / gcd(a, b);
	
	return 0;
}
	