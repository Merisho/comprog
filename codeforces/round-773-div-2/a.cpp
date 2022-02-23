#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int test_case = 0; test_case < T; ++test_case) {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        double d12 = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
        double d13 = sqrt(pow(x3 - x1, 2.0) + pow(y3 - y1, 2.0));
        double d23 = sqrt(pow(x2 - x3, 2.0) + pow(y2 - y3, 2.0));
        double ans = 0;
        if (y1 == y2 && y2 > y3) {
            ans += d12;
        } else if (y1 == y3 && y3 > y2) {
            ans += d13;
        } else if (y2 == y3 && y3 > y1) {
            ans += d23;
        }

        cout << fixed << setprecision(6) << ans << endl;
    }

    return 0;
}
