#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    string ans;
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
    {
        ans = "vowel";
    }
    else
    {
        ans = "consonant";
    }
    cout << ans << endl;
    return 0;
}
