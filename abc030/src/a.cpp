#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string ans;
    if (b * c == d * a) {
        ans = "DRAW";
    } else if (b * c > d * a) {
        ans = "TAKAHASHI";
    } else {
        ans = "AOKI";
    }
    cout << ans << endl;
    return 0;
}