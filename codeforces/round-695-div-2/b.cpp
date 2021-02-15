#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
vector<int> a;

bool isHill(int i) {
	return i > 0 && i < n - 1 && a[i] > a[i - 1] && a[i] > a[i + 1];
}

bool isValley(int i) {
	return i > 0 && i < n - 1 && a[i] < a[i - 1] && a[i] < a[i + 1];
}

bool isHillValley(int i) {
	return isHill(i) || isValley(i);
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		cin >> n;

		a = vector<int>(n);
		for (int& ai : a) {
			cin >> ai;
		}

		int s = 0;
		vector<int> is(n, 0);
		for (int i = 0; i < n; ++i) {
			if (isHillValley(i)) {
				++s;
				is[i] = 1;
			}
		}

		int ans = s;
		for (int i = 1; i < n - 1; ++i) {
			int t = a[i];
			a[i] = a[i - 1];
			ans = min(ans, s - is[i - 1] - is[i] - is[i + 1] + isHillValley(i - 1) + isHillValley(i) + isHillValley(i + 1));
		
			a[i] = a[i + 1];
			ans = min(ans, s - is[i - 1] - is[i] - is[i + 1] + isHillValley(i - 1) + isHillValley(i) + isHillValley(i + 1));

			a[i] = t;
		}


		cout << ans << endl;
	}
	
	return 0;
}
