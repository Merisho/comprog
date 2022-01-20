#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <stack>
using namespace std;
using ll = long long;

int main() {
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; ++tc) {
        ll n;
        cin >> n;

        vector<ll> c(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            ll a;
            cin >> a;

            ++c[a];
        }

        vector<ll> ans(n + 1, -1);
        stack<ll> s;
        ll p = 0;
        for (int i = 0; i < n + 1; ++i) {
            if (i > 0 && c[i - 1] == 0) {
                if (s.empty()) {
                    break;
                }

                int j = s.top();
                s.pop();
                p += i - 1 - j;
            }

            ans[i] = p + c[i];

            while (i > 0 && c[i - 1] > 1) {
                s.push(i - 1);
                --c[i - 1];
            }
        }

        for (ll x : ans) {
            cout << x << " ";
        }

        cout << endl;
    }
}
