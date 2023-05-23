#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    size_t i_a = s.find('A');
    size_t i_z = s.rfind('Z');
    size_t ans = i_z - i_a + 1;
    cout << ans << endl;

    return 0;
}