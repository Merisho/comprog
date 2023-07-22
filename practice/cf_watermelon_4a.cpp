#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif

    int w;
    cin >> w;

    if (w % 2 == 1 || w == 2) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    return 0;
}