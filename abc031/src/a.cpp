#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long a, d;
    cin >> a >> d;

    long long ans = max((a + 1) * d, a * (d + 1));
    cout << ans << endl;

    return 0;
}