#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = count_if(a.begin(), a.end(), [](int x){ return x != 0; });
    int sum = accumulate(a.begin(), a.end(), 0);
    int ans = (sum + count - 1) / count; // for roundup
    cout << ans << endl;
    return 0;
}