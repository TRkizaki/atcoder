#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string w;
    cin >> w;
    map<char, int> m;
    for (char c : w)
    {
        m[c]++;
    }
    bool ans = true;
    for (auto p : m)
    {
        if (p.second % 2 != 0)
        {
            ans = false;
            break;
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
