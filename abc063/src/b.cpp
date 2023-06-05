// correct

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> charSet;
    for (char c : s) {
        charSet.insert(c);
    }

    string ans = (s.length() == charSet.size()) ? "yes" : "no";
    cout << ans << endl;

    return 0;
}
