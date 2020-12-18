#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int a, b, c;
		cin >> a >> b >> c;

		int arr[3] = {a, b, c};

		sort(arr, arr + 3);
		int mn = arr[0];
		int avg = arr[1];
		int mx = arr[2];

		int s = (a + b + c);
		if (s >= 9 && (s - (mx / 7) * 3) % 6 == 0) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;
	}
	
	return 0;
}
