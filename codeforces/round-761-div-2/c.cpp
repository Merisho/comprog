#include <iostream>
#include <set>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
    int T;
    cin >> T;

    for (int tc = 0; tc < T; ++tc) {
        int n;
        cin >> n;

        set<int> p;
        for (int i = 1; i <= n; ++i) {
            p.insert(i);
        }

        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int ai;
            cin >> ai;

            if (p.count(ai) == 1) {
                p.erase(ai);
            } else {
                a.push_back(ai);
            }
        }

        sort(a.begin(), a.end());

        int ans = a.size();
        for (int i = a.size() - 1; i >= 0; --i) {
            auto last = p.end();
            --last;

            if ((*last) > (a[i] - 1) / 2) {
                ans = -1;
                break;
            }

            p.erase(*last);
        }

        cout << ans << endl;
    }

    return 0;
}
