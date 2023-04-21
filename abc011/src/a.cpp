#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = (n == 12) ? 1 : n + 1;
    cout << ans << endl;
    return 0;
}