#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;

    vector<vector<char>> t;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            t.push_back({s[i], s[j]});
        }
    }
    sort(t.begin(), t.end());
    string ans = string(1, t[n - 1][0]) + t[n - 1][1];
    cout << ans << endl;

    return 0;
}