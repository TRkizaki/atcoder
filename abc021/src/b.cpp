#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int n, a, b, k;          // AtCoder 王国に存在する町の個数を表す整数n
    cin >> n >> a >> b >> k; // k回 AtCoder王国のどこかの町を経由
    set<int> s;              // s contains the elements {2, 4}.
    s.insert(a);             // 出発する町とあなたの家がある町の番号を表す 2つの整数a,b
    s.insert(b);
    for (int i = 0; i < k; i++)
    {
        int p_i; // 移動において経由した町の番号が順番に空白区切りで与えられる
        cin >> p_i;
        if (!s.insert(p_i).second)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}