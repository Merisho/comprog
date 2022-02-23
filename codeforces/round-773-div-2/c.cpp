#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        int n, x;
        cin >> n >> x;

        map<int, int> cnt;
        vector<int> unq;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            ++cnt[a];

            if (cnt[a] == 1) {
                unq.push_back(a);
            }
        }

        sort(unq.begin(), unq.end());

        int ans = 0;
        for (int i = unq.size() - 1; i >= 0; --i) {
            if (unq[i] % x == 0) {
                int p = unq[i] / x;
                int mn = min(cnt[p], cnt[unq[i]]);
                cnt[p] -= mn;
                cnt[unq[i]] -= mn;
            }

            ans += cnt[unq[i]];
        }

        cout << ans << endl;
    }

    return 0;
}
