#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int m = b;
    int n = 0;
    while (m > 0)
    {
        m /= 10;
        n += 1;
    }
    int ans = (a * pow(10, n) + b) * 2;
    cout << ans << endl;
    return 0;
}