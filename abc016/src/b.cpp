#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool p = a + b == c;
    bool m = a - b == c;
    char ans;
    if (p && m)
    {
        ans = '?';
    }
    else if (p && !m)
    {
        ans = '+';
    }
    else if (!p && m)
    {
        ans = '-';
    }
    else
    {
        ans = '!';
    }
    cout << ans << endl;
    return 0;
}