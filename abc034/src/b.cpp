
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = (n % 2 == 0) ? (n - 1) : (n + 1);
    cout << ans << endl;
    return 0;
}