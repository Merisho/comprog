#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool good(vector<int>& a, int l) {
    int r = a.size() - 1;
    int mn = 0;
    while (l <= r) {
        int m;
        if (a[l] <= a[r]) {
            m = a[l];
            ++l;
        } else {
            m = a[r];
            --r;
        }

        if (m < mn) {
            return false;
        }

        mn = m;
    }

    return true;
}

int find(vector<int>& a) {
    int n = a.size();

    int l = 0;
    int r = n - 2;
    int ans = 0;
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (good(a, m)) {
            r = m - 1;
            ans = m;
        } else {
            l = m + 1;
        }
    }

    return ans;
}

int main() {
	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; ++test_case) {
		int n;
        cin >> n;

        vector<int> a(n);
        for (int& ai : a) {
            cin >> ai;
        }

        int p = find(a);

		cout << p << endl;
	}
	
	return 0;
}
