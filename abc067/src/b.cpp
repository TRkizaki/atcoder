#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<long long> l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }

    sort(l.begin(), l.end(), greater<long long>());

    long long ans = 0;
    for (int i = 0; i < k; ++i) {
        ans += l[i];
    }

    cout << ans << endl;

    return 0;
}
