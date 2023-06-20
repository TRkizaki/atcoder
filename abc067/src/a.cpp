#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    string ans = (a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0) ? "Possible" : "Impossible";
    cout << ans << endl;
    return 0;
}
