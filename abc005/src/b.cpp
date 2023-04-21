#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    sort(t.begin(), t.end()); // sortでascending
    int ans = t[0];           //[0]で一番小さい数字を引き出す
    cout << ans << endl;
    return 0;
}
