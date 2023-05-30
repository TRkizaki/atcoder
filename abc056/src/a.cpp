#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;

    char ans = (a == 'H' && b == 'H' || a == 'D' && b == 'D' ? 'H' : 'D');
    cout << ans << endl;
    return 0;
}
