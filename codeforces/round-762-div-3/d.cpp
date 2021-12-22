#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include <algorithm>
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    for (int tc = 1; tc <= T; ++tc) {
        int m, n;
        cin >> m >> n;
 
        vector<vector<pair<int, int>>> fr(n);
        vector<vector<int>> shops(m, vector<int>(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int val;
                cin >> val;
 
                fr[j].push_back({val, i});
                shops[i][j] = val;
            }
        }
 
        set<int> fr_shops;
        int mn = 1e9;
        for (auto& f : fr) {
            sort(f.begin(), f.end());
            fr_shops.insert(f.back().second);
            mn = min(mn, f.back().first);
        }
 
        if (fr_shops.size() < n) {
            cout << mn << endl;
            continue;
        }
 
        int ans = 0;
        for (auto s : shops) {
            sort(s.begin(), s.end());
            ans = max(ans, min(mn, s[s.size() - 2]));
        }
 
        cout << ans << endl;
    }
}