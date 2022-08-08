#include <iostream>
#include <algorithm>
#include <map>
#include <math.h>
#include <vector>
using ll = long long;
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        int a, b;
        cin >> a >> b;

        int ans = b - a;
        for (int aa = a; aa < b; ++aa) {
            int bb = 0;
            for (int i = 21; i >= 0; --i) {
                if ((b>>i)&1) {
                    bb |= (1<<i);
                } else if ((aa>>i)&1) {
                    bb |= (1<<i);
                    break;
                }
            }
            ans = min(ans, aa - a - b + (aa | bb) + 1);
        }

        cout << ans << endl;
    }
}