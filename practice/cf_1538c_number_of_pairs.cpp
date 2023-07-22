// Problem URL: https://codeforces.com/problemset/problem/1538/C
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
using ld = long double;

int find_l(vector<ll>& a, int start, int x) {
    int l = start;
    int r = a.size();
    while (l < r) {
        int m = (l + r) / 2;

        if (a[m - 1] < x && a[m] >= x) {
            return m;
        }

        if (a[m - 1] >= x) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    return l;
}

int find_r(vector<ll>& a, int start, int x) {
    int l = start;
    int r = a.size();
    while (l < r) {
        int m = (l + r) / 2;

        if (a[m - 1] <= x && a[m] > x) {
            return m;
        }

        if (a[m - 1] > x) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    return r;
}

void solve(int test_case) {
	ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> a(n);
    for (ll &ai : a) {
        cin >> ai;
    }

    sort(a.begin(), a.end());

    ll ans = 0;
    for (int i = 0; i < n && a[i] < r; ++i) {
        ll li = find_l(a, i + 1, l - a[i]);
        ll ri = find_r(a, li, r - a[i]);

        ans += max(0LL, ri - li);
    }

    cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_1538c_number_of_pairs_input.txt", "r", stdin);
    #endif

	int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

	return 0;
}
