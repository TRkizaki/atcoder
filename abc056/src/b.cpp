// my answer
#include <iostream>
using namespace std;

int main()
{
    int w, a, b;
    cin >> w >> a >> b;

    int ans;

    if (a == b) {
        ans = 0;
    } else if (a > (b + w)) {
        ans = a - (b + w);
    } else if (b > (a + w)) {
        ans = b - (a + w);
    }

    cout << ans << endl;
    return 0;
}
