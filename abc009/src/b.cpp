#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n)
    {
        vector<int> a(n);
        for (auto &x : a)
        { // aの範囲のうちはxをループ
            cin >> x;
        }
        sort(a.begin(), a.end());                     // 大きい順に並べる
        a.erase(unique(a.begin(), a.end()), a.end()); // 重複をerase
        cout << a[a.size() - 2] << '\n';              // 2番目に大きい数をreturn
    }

    return 0;
}