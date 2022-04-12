#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
#include <set>
using ll = long long;
using namespace std;

vector<ll> facts;

ll find(ll n, ll fi = 0, ll s = 0, ll fk = 0) {
    if (s > n) {
        return 1e9;
    }

    ll ans = fk + __builtin_popcountll(n - s);

    for (int i = fi; i < facts.size(); ++i) {
        ll f = facts[i];

        ans = min(ans, find(n, i + 1, s, fk));
        ans = min(ans, find(n, i + 1, s + f, fk + 1));
    }

    return ans;
}

void solve(int test_case) {
    ll n;
    cin >> n;

    ll ans = find(n);

    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;

    ll factorial = 6;
    ll f = 4;
    while (factorial < 1e12) {
        facts.push_back(factorial);
        factorial *= f;
        ++f;
    }

    for (int test_case = 0; test_case < T; ++test_case) {
        solve(test_case);
    }

    return 0;
}
