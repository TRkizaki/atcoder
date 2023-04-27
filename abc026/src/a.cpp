#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a;
    cin >> a;
    int max_v = 0;
    for (int x = 1; x < a; x++) {
        int y = a - x;
        max_v = max(max_v, x * y);
    }
    int ans = max_v;
    cout << ans << endl;
    return 0;
}