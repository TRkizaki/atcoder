#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = (b + (a - 1)) / a;
    cout << ans << endl;
    return 0;
}
