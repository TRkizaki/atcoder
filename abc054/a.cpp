#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // 1が一番強い
    if (a == 1)
        a += 13;
    if (b == 1)
        b += 13;

    string ans;
    if (a > b) {
        ans = "Alice";
    } else if (a < b) {
        ans = "Bob";
    } else {
        ans = "Draw";
    }
    cout << ans << endl;
    return 0;
}
