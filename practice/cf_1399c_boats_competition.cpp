// Problem URL: https://codeforces.com/problemset/problem/1399/C
#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ll = long long;
using ld = long double;

void solve(int test_case) {
	int n;
    cin >> n;

    vector<int> w(n);
    for (int &wi : w) {
        cin >> wi;
    }

    set<int> v;
    int ans = 0;
    for (int s = 2; s <= 2 * n; ++s) {
        v.clear();
        int curr = 0;

        for (int i = 0; i < n; ++i) {
            if (v.count(i) > 0) {
                continue;
            }

            for (int j = i + 1; j < n; ++j) {
                if (w[i] + w[j] == s && v.count(j) == 0) {
                    v.insert(j);
                    ++curr;
                    break;
                }
            }
        }

        ans = max(ans, curr);
    }

    cout << ans << endl;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("cf_1399c_boats_competition_input.txt", "r", stdin);
    #endif

	int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

	return 0;
}
