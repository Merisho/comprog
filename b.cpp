#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	int ud = n / 2 + 1;
	int lr = (n + 1) / 2 + 1;

	int ans = ud * lr;

	if (n % 2 == 1) {
		ans *= 2;
	}

	cout << ans;
	
	return 0;
}
