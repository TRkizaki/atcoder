#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int ans = a + b;
    if (ans > 9) {
        cout << "error" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
