#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;

	long long r = n % k;
	cout << min(r, abs(r - k));
	
	return 0;
}
	