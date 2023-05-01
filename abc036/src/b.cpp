#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n));
    // マス目
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}