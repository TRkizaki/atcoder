#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    long long a, b;
    vector<pair<string, long long>> sd;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        string s_i;
        long long d_i;
        cin >> s_i >> d_i;
        sd.push_back(make_pair(s_i, d_i));
    }
    long long c = 0;
    for (auto [s_i, d_i] : sd) {
        long long x = max(min(d_i, b), a);
        long long d;
        if (s_i == "E") {
            d = x;
        } else if (s_i == "W") {
            d = -x;
        } else {
            return 1; // Error: unreachable code
        }
        c += d;
    }
    long long ans = c;
    if (ans == 0) {
        cout << 0 << endl;
    } else {
        cout << (ans > 0 ? "East " : "West ") << abs(ans) << endl;
    }
    return 0;
}